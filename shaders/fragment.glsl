#version 450

#define PI 3.1415926535
#define FLOAT_MAX 3.402823466E+38

in vec2 position;
out vec4 fragColor;
uniform float time = 0;

//-------------------------------------
// Random functions
//-------------------------------------

vec3 mod289(vec3 x) {
  return x - floor(x * (1.0 / 289.0)) * 289.0;
}

vec2 mod289(vec2 x) {
  return x - floor(x * (1.0 / 289.0)) * 289.0;
}

vec3 permute(vec3 x) {
  return mod289(((x*34.0)+1.0)*x);
}

float snoise(vec2 v)
{
    const vec4 C = vec4(0.211324865405187,  // (3.0-sqrt(3.0))/6.0
                        0.366025403784439,  // 0.5*(sqrt(3.0)-1.0)
                        -0.577350269189626,  // -1.0 + 2.0 * C.x
                        0.024390243902439); // 1.0 / 41.0
    // First corner
    vec2 i  = floor(v + dot(v, C.yy) );
    vec2 x0 = v -   i + dot(i, C.xx);

    // Other corners
    vec2 i1;
    //i1.x = step( x0.y, x0.x ); // x0.x > x0.y ? 1.0 : 0.0
    //i1.y = 1.0 - i1.x;
    i1 = (x0.x > x0.y) ? vec2(1.0, 0.0) : vec2(0.0, 1.0);
    // x0 = x0 - 0.0 + 0.0 * C.xx ;
    // x1 = x0 - i1 + 1.0 * C.xx ;
    // x2 = x0 - 1.0 + 2.0 * C.xx ;
    vec4 x12 = x0.xyxy + C.xxzz;
    x12.xy -= i1;

    // Permutations
    i = mod289(i); // Avoid truncation effects in permutation
    vec3 p = permute( permute( i.y + vec3(0.0, i1.y, 1.0 ))
        + i.x + vec3(0.0, i1.x, 1.0 ));

    vec3 m = max(0.5 - vec3(dot(x0,x0), dot(x12.xy,x12.xy), dot(x12.zw,x12.zw)), 0.0);
    m = m*m ;
    m = m*m ;

    // Gradients: 41 points uniformly over a line, mapped onto a diamond.
    // The ring size 17*17 = 289 is close to a multiple of 41 (41*7 = 287)

    vec3 x = 2.0 * fract(p * C.www) - 1.0;
    vec3 h = abs(x) - 0.5;
    vec3 ox = floor(x + 0.5);
    vec3 a0 = x - ox;

    // Normalise gradients implicitly by scaling m
    // Approximation of: m *= inversesqrt( a0*a0 + h*h );
    m *= 1.79284291400159 - 0.85373472095314 * ( a0*a0 + h*h );

    // Compute final noise value at P
    vec3 g;
    g.x  = a0.x  * x0.x  + h.x  * x0.y;
    g.yz = a0.yz * x12.xz + h.yz * x12.yw;
    return 130.0 * dot(m, g);
}

vec4 mod289(vec4 x) {
  return x - floor(x * (1.0 / 289.0)) * 289.0; }

float mod289(float x) {
  return x - floor(x * (1.0 / 289.0)) * 289.0; }

vec4 permute(vec4 x) {
     return mod289(((x*34.0)+1.0)*x);
}

float permute(float x) {
     return mod289(((x*34.0)+1.0)*x);
}

vec4 taylorInvSqrt(vec4 r)
{
  return 1.79284291400159 - 0.85373472095314 * r;
}

float taylorInvSqrt(float r)
{
  return 1.79284291400159 - 0.85373472095314 * r;
}

vec4 grad4(float j, vec4 ip)
{
    const vec4 ones = vec4(1.0, 1.0, 1.0, -1.0);
    vec4 p,s;

    p.xyz = floor( fract (vec3(j) * ip.xyz) * 7.0) * ip.z - 1.0;
    p.w = 1.5 - dot(abs(p.xyz), ones.xyz);
    s = vec4(lessThan(p, vec4(0.0)));
    p.xyz = p.xyz + (s.xyz*2.0 - 1.0) * s.www;

    return p;
    }

    // (sqrt(5) - 1)/4 = F4, used once below
    #define F4 0.309016994374947451

    float snoise(vec4 v)
    {
    const vec4  C = vec4( 0.138196601125011,  // (5 - sqrt(5))/20  G4
                            0.276393202250021,  // 2 * G4
                            0.414589803375032,  // 3 * G4
                        -0.447213595499958); // -1 + 4 * G4

    // First corner
    vec4 i  = floor(v + dot(v, vec4(F4)) );
    vec4 x0 = v -   i + dot(i, C.xxxx);

    // Other corners

    // Rank sorting originally contributed by Bill Licea-Kane, AMD (formerly ATI)
    vec4 i0;
    vec3 isX = step( x0.yzw, x0.xxx );
    vec3 isYZ = step( x0.zww, x0.yyz );
    //  i0.x = dot( isX, vec3( 1.0 ) );
    i0.x = isX.x + isX.y + isX.z;
    i0.yzw = 1.0 - isX;
    //  i0.y += dot( isYZ.xy, vec2( 1.0 ) );
    i0.y += isYZ.x + isYZ.y;
    i0.zw += 1.0 - isYZ.xy;
    i0.z += isYZ.z;
    i0.w += 1.0 - isYZ.z;

    // i0 now contains the unique values 0,1,2,3 in each channel
    vec4 i3 = clamp( i0, 0.0, 1.0 );
    vec4 i2 = clamp( i0-1.0, 0.0, 1.0 );
    vec4 i1 = clamp( i0-2.0, 0.0, 1.0 );

    //  x0 = x0 - 0.0 + 0.0 * C.xxxx
    //  x1 = x0 - i1  + 1.0 * C.xxxx
    //  x2 = x0 - i2  + 2.0 * C.xxxx
    //  x3 = x0 - i3  + 3.0 * C.xxxx
    //  x4 = x0 - 1.0 + 4.0 * C.xxxx
    vec4 x1 = x0 - i1 + C.xxxx;
    vec4 x2 = x0 - i2 + C.yyyy;
    vec4 x3 = x0 - i3 + C.zzzz;
    vec4 x4 = x0 + C.wwww;

    // Permutations
    i = mod289(i);
    float j0 = permute( permute( permute( permute(i.w) + i.z) + i.y) + i.x);
    vec4 j1 = permute( permute( permute( permute (
                i.w + vec4(i1.w, i2.w, i3.w, 1.0 ))
            + i.z + vec4(i1.z, i2.z, i3.z, 1.0 ))
            + i.y + vec4(i1.y, i2.y, i3.y, 1.0 ))
            + i.x + vec4(i1.x, i2.x, i3.x, 1.0 ));

    // Gradients: 7x7x6 points over a cube, mapped onto a 4-cross polytope
    // 7*7*6 = 294, which is close to the ring size 17*17 = 289.
    vec4 ip = vec4(1.0/294.0, 1.0/49.0, 1.0/7.0, 0.0) ;

    vec4 p0 = grad4(j0,   ip);
    vec4 p1 = grad4(j1.x, ip);
    vec4 p2 = grad4(j1.y, ip);
    vec4 p3 = grad4(j1.z, ip);
    vec4 p4 = grad4(j1.w, ip);

    // Normalise gradients
    vec4 norm = taylorInvSqrt(vec4(dot(p0,p0), dot(p1,p1), dot(p2, p2), dot(p3,p3)));
    p0 *= norm.x;
    p1 *= norm.y;
    p2 *= norm.z;
    p3 *= norm.w;
    p4 *= taylorInvSqrt(dot(p4,p4));

    // Mix contributions from the five corners
    vec3 m0 = max(0.6 - vec3(dot(x0,x0), dot(x1,x1), dot(x2,x2)), 0.0);
    vec2 m1 = max(0.6 - vec2(dot(x3,x3), dot(x4,x4)            ), 0.0);
    m0 = m0 * m0;
    m1 = m1 * m1;
    return 49.0 * ( dot(m0*m0, vec3( dot( p0, x0 ), dot( p1, x1 ), dot( p2, x2 )))
                + dot(m1*m1, vec2( dot( p3, x3 ), dot( p4, x4 ) ) ) ) ;

}
//-------------------------------------
// Primitive definitions
//-------------------------------------

float sdPlane( vec3 p, vec4 n )
{
    return dot(p,n.xyz) + n.w;
}

float udRoundBox(vec3 p,vec3 b,float r)
{
    return length(max(abs(p)-b,0.0))-r;
}

float sdSphere( vec3 p, float s )
{
  return length(p)-s;
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

//-------------------------------------
// Operators
//-------------------------------------

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

vec3 opRep( vec3 p, vec3 c )
{
    return mod(p, c) - 0.5 * c;
}

vec2 opKaleido(vec2 pos, float div)
{
    float a = atan(pos.y, pos.x);
    float n = PI * 2 / div;
    a = mod(a + n / 2.0, n) - n / 2.0;
    return vec2(sin(a), cos(a)) * length(pos);
}

float clamp01(float v)
{
    return clamp(v, 0, 1);
}
vec2 clamp01(vec2 v)
{
    return clamp(v, 0, 1);
}
vec3 clamp01(vec3 v)
{
    return clamp(v, 0, 1);
}
vec4 clamp01(vec4 v)
{
    return clamp(v, 0, 1);
}

//-------------------------------------
// Matrices
//-------------------------------------

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

//-------------------------------------
// Models
//-------------------------------------

float roundCube (vec3 pos)
{
    vec3 roundboxPos = (sin(time) * 0.5 + 1) * rotZ(time) * rotX(time) * rotY(time) * pos;
    float roundbox = udRoundBox(roundboxPos, vec3(0.5), 0.25);

    float box = roundbox;
    box = smax(box, -sdCylinderX(roundboxPos, 0.4), 10);
    box = smax(box, -sdCylinderY(roundboxPos, 0.4), 10);
    box = smax(box, -sdCylinderZ(roundboxPos, 0.4), 10);

    return box;
}

float petal(vec3 pos)
{
    float disp = sin(pos.x * 50.5) * 0.0005;
    float sphere1 = sdSphere(pos, 2.0);
    float sphere2 = sdSphere(pos * vec3(0.1, 1, 1) + vec3(0, 0, 0.2), 2.1);
    return max(sphere1, -sphere2) - disp;
}

float flower(vec3 pos)
{
    pos.xz = opRep(pos, vec3(1, 1, 1) * 10).xz;
    float dist = FLOAT_MAX;
    int j = 0;
    for (int j = 0; j < 4; ++j)
    {
        int i = 0;
        vec3 p = pos;
        p = rotY(j * PI / 3.0 / 2.0) * p;
        p.xz = opKaleido(p.xz, 8);
        p = rotX(0.4 + j * 0.2 + sin(time) * 0.5) * p;
        p += vec3(0, -1.5, 0);
        dist = min(petal(p), dist);
    }
    return dist;
}


float ground(vec3 pos)
{
    float noise = (snoise(vec4(floor(pos.xz), 0, time * 0.1)) - 0.5) * 8;
    noise = mix(0.01, 0.99, clamp01(noise));

    pos.y -= noise * 0.5;

    pos.xz = opRep(pos, vec3(1, 1, 1)).xz;
    return udRoundBox(pos, vec3(1, 1, 1) * 0.44, 0.05);
}

//-------------------------------------
// Distance function
//-------------------------------------

float distFunc(vec3 pos)
{
    float dist = FLOAT_MAX;
    dist = min(ground(pos), dist);
    //dist = min(flower(pos), dist);
    //dist = min(cubes(pos), dist);
    return dist;
}

//-------------------------------------
// Distance function operators
//-------------------------------------

vec3 getNormal(vec3 pos)
{
    const float d = 0.001;
    vec3 norm = vec3(0, 0, 0);
    norm.x = distFunc(pos+vec3(d,0,0))-distFunc(pos-vec3(d,0,0));
    norm.y = distFunc(pos+vec3(0,d,0))-distFunc(pos-vec3(0,d,0));
    norm.z = distFunc(pos+vec3(0,0,d))-distFunc(pos-vec3(0,0,d));
    return normalize(norm);
}

vec3 getColor(vec3 pos)
{
    float noise = (snoise(vec4(floor(pos.xz), 0, time * 0.1)) - 0.5) * 8;
    noise = mix(0.01, 0.99, clamp01(noise));
    return noise * vec3(1, 1, 1);// * (pos.y + 1);//vec3(1, 1, 1) * (pos.y - 1);
}

//-------------------------------------
// Entry point
//-------------------------------------

void main(void)
{
    mat3 rot = rotY(time * 0.3);
    vec3 pos = vec3(0, 0, 10) + vec3(0.0, 4.0, -5.0);
    vec3 dir = rot * rotX(-0.2) * normalize(vec3(position.x, position.y, 1));
    float depth = 0;
    float iteration = 128;
    for(depth = 0; depth < iteration; ++depth)
    {
        float d = distFunc(pos);
        pos += d * dir * 0.5; 
        if (d < 0.001)
        {
            break;
        }
    }

    if (depth >= 64)
    {
        fragColor = vec4(vec3(0.8, 0.9, 0.9), 1);
        return;
    }

    vec3 lightDir = vec3(1, 1, 1);

    vec3 norm = getNormal(pos);
    vec3 color = getColor(pos);
    
    color *= clamp(dot(norm, lightDir), 0, 1) * 0.5 + 0.5;

    color = pow(color, vec3(1, 1, 1) * 1.0 / 2.2);

    fragColor = vec4(color, 1);
    
}