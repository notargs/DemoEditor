#version 450

#define PI 3.1415926535
#define A 0
#define B 2
#define C 3
#define D 5
#define E 7
#define F 8
#define G 10

in vec2 position;
out vec4 fragColor;
uniform float time = 0;

//================================================
// Utils
//================================================
float rand(vec2 co)
{
	return fract(sin(dot(co, vec2(12.9898, 78.233))) * 43758.5453);
}

float calcHertz(float scale)
{
    return 441.0 * pow(2.0, scale / 12.0) * PI;
}

float calcHertz(float octave, float note)
{
    return calcHertz(octave * 12 + note);
}

float rect(float time)
{
    return sign(fract(time / PI / 2) - 0.5);
}

//================================================
// Sound
//================================================
#define Sin1(u, v) ret += clamp(sin(time * calcHertz(u, v)) * (1 - localTime + sin(time * 80.0) * 0.1), -0.3, 0.3);
#define Rect1(u, v) ret += rect(time * calcHertz(u, v)) * (1 - localTime);

float strings(float time)
{
    float loopTime = mod(time, 8);
    float localTime = mod(time * 2, 1.0);
    float ret = 0;

    if (loopTime < 2)
    {
        Sin1(0, F)
        Sin1(0, C)
        Sin1(0, G)
    }
    else if (loopTime < 4)
    {
        Sin1(0, E)
        Sin1(0, C)
        Sin1(0, G)
    }
    else if (loopTime < 6)
    {
        Sin1(0, D)
        Sin1(0, C) 
        Sin1(0, G)
    }
    else 
    {
        Sin1(0, E) 
        Sin1(0, C) 
        Sin1(0, G)
    }
    return ret;
}

float base(float time)
{
    float loopTime = mod(time, 8);
    float localTime = 0;
    if (mod(loopTime, 2) < 1)
    {
        localTime = mod(time * 2, 1.0);
    }
    else
    {
        localTime = mod(time * 2 + 0.5, 1.0);
    }
    
    float ret = 0;

    if (loopTime < 2)
    {
        Rect1(-2, F)
    }
    else if (loopTime < 4)
    {
        Rect1(-2, E)
    }
    else if (loopTime < 6)
    {
        Rect1(-2, D)
    }
    else 
    {
        Rect1(-2, E)
    }
    return ret;
}

float poly(float time)
{
    float loopTime = mod(time * 8, 8);
    float localTime = mod(time * 8, 1.0);
    float ret = 0;

    if (loopTime < 1)
    {
        Sin1(1, G)
    }
    else if (loopTime < 2)
    {
        Sin1(2, D)
    }
    else if (loopTime < 3)
    {
        Sin1(2, F)
    }
    else if (loopTime < 4)
    {
        Sin1(2, G)
    }
    else if (loopTime < 5)
    {
        Sin1(3, C)
    }
    else if (loopTime < 6)
    {
        Sin1(2, G)
    }
    else if (loopTime < 7)
    {
        Sin1(2, E)
    }
    else if (loopTime < 8)
    {
        Sin1(2, C)
    }
    return ret;
}

vec2 noiseSound(float time)
{
    float loopTime = mod(time, 4);
    vec2 ret;
    if (loopTime < 2)
    {
        ret.x = rand(vec2(time * 100, 0)) * 0.1;
        ret.y = rand(vec2(time * 100, 1)) * 0.1;
    }
    else if (loopTime < 3)
    {
        float t = max(1 - (loopTime - 2) * 2, 0) * 0.2;
        ret.x = rand(vec2(time * 100, 0)) * t;
        ret.y = rand(vec2(time * 100, 1)) * t;
    }
    return ret;
}

float bassDrum(float time)
{
    float localTime = mod(time * 4, 2);
    float ret;
    ret += rect(max(0, 1 - localTime * 2) * localTime * 300) * max(0, 1 - localTime * 4);
    return ret;
}

vec2 mainSound(float time)
{
    vec2 sound = vec2(0.0);
    if (time < 16)
    {
        sound += strings(time) * vec2(0.55, 0.6);
    }
    else if (time < 32)
    {
        sound += strings(time) * vec2(0.55, 0.6);
        sound += base(time) * vec2(0.4, 0.38);
    }
    else if (time < 48)
    {
        sound += strings(time) * vec2(0.55, 0.6);
        sound += base(time) * vec2(0.4, 0.38);
        sound += poly(time) * vec2(0.2, 0.3);
    }
    else if (time < 64)
    {
        sound += strings(time) * vec2(0.55, 0.6);
        sound += base(time) * vec2(0.4, 0.38);
        sound += poly(time) * vec2(0.2, 0.3);
        sound += bassDrum(time) * 0.4;
    }
    else if (time < 80)
    {
        sound += strings(time) * vec2(0.55, 0.6);
        sound += base(time) * vec2(0.4, 0.38);
    }
    else if (time < 96)
    {
        sound += strings(time) * vec2(0.55, 0.6);
    }
    sound += noiseSound(time);
    sound = clamp(sound, -vec2(1), vec2(1));
    return vec2(sound);
}

float cube(vec2 pos)
{
    float a = (floor(time) + pow(fract(time), 0.5)) * 2.0;
    mat2 rot = mat2(cos(a), -sin(a), sin(a), cos(a));
    pos = rot * pos;
    return max(0, 1 - length(max(abs(pos)-vec2(0.2),0.0)) * 40);
}

void main() 
{
    vec2 pos = position;
    vec3 color = abs(pos.y + mainSound(time + pos.x * 0.005).x * 0.6) * vec3(1, 1, 1) * 20.0;//;
    
    color = clamp(color, vec3(0), vec3(1));
    color -= length(pos) * 0.4;
    color -= min(0.01 / abs(pos.x), 1) * vec3(0.3);
    
    color -= cube(pos + vec2(1.5,  0.7));
    color -= cube(pos - vec2(1.5,  0.7));

    fragColor = vec4(color, 1);
}