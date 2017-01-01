#version 450

in vec2 position;

out vec4 fragColor;

uniform float time = 0;

float sdPlane( vec3 p, vec4 n )
{
    return dot(p,n.xyz) + n.w;
}

float udRoundBox(vec3 p,vec3 b,float r)
{
    return length(max(abs(p)-b,0.0))-r;
}

mat3 rotY(float a)
{
    return mat3(
        cos(a), 0, -sin(a),
        0, 1, 0,
        sin(a), 0, cos(a)
    );
}

mat3 rotX(float a)
{
    return mat3(
        1, 0, 0,
        0, cos(a), -sin(a),
        0, sin(a), cos(a)
    );
}

mat3 rotZ(float a)
{
    return mat3(
        cos(a), -sin(a), 0,
        sin(a), cos(a), 0,
        0, 0, 1
    );
}

float sdCylinderX( vec3 p, float size)
{
    return length(p.yz) - size;
}

float sdCylinderY( vec3 p, float size)
{
    return length(p.xz) - size;
}

float sdCylinderZ( vec3 p, float size)
{
    return length(p.xy) - size;
}

float opS( float d1, float d2 )
{
    return max(-d1,d2);
}

float smin( float a, float b, float k )
{
    float res = exp( -k*a ) + exp( -k*b );
    return -log( res )/k;
}

float smax( float a, float b, float k )
{
    float res = exp( k*a ) + exp( k*b );
    return log( res )/k;
}

float distFunc(vec3 pos)
{
    vec3 roundboxPos = rotZ(time) * rotX(time) * rotY(time) * pos;
    float roundbox = udRoundBox(roundboxPos, vec3(1.0), 0.5);

    float box = roundbox;
    box = smax(box, -sdCylinderX(roundboxPos, 0.8), 10);
    box = smax(box, -sdCylinderY(roundboxPos, 0.8), 10);
    box = smax(box, -sdCylinderZ(roundboxPos, 0.8), 10);

    float plane = sdPlane(pos, vec4(0, 1, 0, 2.0));
    return min(plane, box);
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
    vec3 pos = vec3(0.0, 0.0, -5.0);
    vec3 dir = normalize(vec3(position.x, position.y, 1));
    for(int i = 0; i < 256; ++i)
    {
        float d = distFunc(pos);
        pos += d * dir; 
        if (d < 0.001)
        {
            break;
        }

    }

    vec3 norm = getNormal(pos);

    vec3 color = vec3(1, 1, 1);

    for (int i = 0; i < 10; ++i)
    {
        float p = 1 - i / 10.0;
        float len = i / 20.0f;
        color *= clamp(1 - abs(distFunc(pos + norm * len) - len) * p, 0, 1);
    }
    
    fragColor = vec4(color, 1);
    
}