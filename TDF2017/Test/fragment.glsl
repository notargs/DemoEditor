#version 450

in vec2 pos;

out vec4 fragColor;

uniform int time = 0;
struct Ray{ 
    vec3 pos; 
    vec3 dir; 
};

float udRoundBox(vec3 p,vec3 b,float r)
{
    return length(max(abs(p)-b,0.0))-r;
}

vec3 repPos(vec3 p,vec3 c)
{
    return mod(p,c)-0.5*c;
}

float subFunc(vec3 pos)
{
    float a = mod(atan(pos.y,pos.x), 3.1415926535 / 1.5)-3.1415926535/1.5/2.0;
    float xyLen = length(pos.xy);
    a -= pos.z;
    pos.xy=vec2(xyLen*sin(a),xyLen*cos(a));
    pos=repPos(pos,vec3(0.03));
    return udRoundBox(pos,vec3(0.0138),0.001);
}

float func(vec3 pos)
{
    float a = mod(atan(pos.y,pos.x),3.1415926535/1.5)-3.1415926535/1.5/2.0;
    float xyLen=length(pos.xy);
    a+=pos.z;
    pos.xy=vec2(xyLen*sin(a),xyLen*cos(a));
    pos=repPos(pos,vec3(0.33));
    return udRoundBox(pos,vec3(0.1),0.01);
}

float distFunc(vec3 pos)
{
    return max(-subFunc(pos),func(pos));
}

vec3 getNormal(vec3 pos)
{
    const float d = 0.0001;
    return normalize(vec3(distFunc(pos+vec3(d,0,0))-distFunc(pos-vec3(d,0,0)),
        distFunc(pos+vec3(0,d,0))-distFunc(pos-vec3(0,d,0)),
        distFunc(pos+vec3(0,0,d))-distFunc(pos-vec3(0,0,d))));
}

void main(void)
{
    vec3 dir = normalize(-vec3(-pos.x * 1.333, -pos.y, 1));
    vec3 cameraPos = vec3(0.0, 0.0, -10.0 + float(time) * 0.0002);
    Ray ray;
    ray.pos = cameraPos;
    ray.dir = dir;
    float d;
    for(int i = 0; i < 128; ++i)
    {
        d=distFunc(ray.pos);
        ray.pos += d * ray.dir; 
        if (abs(d) < 0.001 && i != 0)
        {
            break;
        }
    }
    float light = dot(getNormal(ray.pos),vec3(1,1,-1));
    fragColor = vec4(vec3(clamp(vec3(1.0,0.7,0.4)*light+(ray.pos-cameraPos).z*0.5,0.0,1.0)),1.0);
}