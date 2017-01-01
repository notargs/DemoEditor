#version 450

#define PI 3.1415926535

out vec2 out_sample;

float rand(vec2 co)
{
	return fract(sin(dot(co, vec2(12.9898, 78.233))) * 43758.5453);
}

float calcHertz(float scale)
{
    return 440.0 * pow(2.0, scale / 12.0);
}

float bassDrum(float time)
{
    float t = mod(time, 1.0) / 3.0 * 8.0;
    return sin(time * (440.0)) * max(0.0, 1.0 - fract(t) * 8.0);
}

float snereDrum(float time)
{
    float t = mod(time + 0.5, 1.0);
    return rand(vec2(time * 32.0, 0.0)) * max(0.0, 1.0 - t * 4.0);
}

float hiHat(float time)
{
    float t = time * 16.0;
    if (mod(t, 16.0) > 3.0 && mod(t, 2.0) > 1.0)
    {
        return 0.0;
    }
    return rand(vec2(time * 32.0, 0.0)) * max(0.0, 1.0 - fract(t) * 4.0);
}

float rect(float time)
{
    if (fract(time / PI / 2.0) < 0.5)
    {
     	return 1.0;  
    }
    else
    {
        return 0.0;
    }
}

float strings(float time)
{
    float t = mod(time * 4.0, 1.0);
    float sound = 0.0;
    if (mod(time, 8.0) < 4.0)
    {
        sound += rect(time * calcHertz(24.0));
        sound += rect(time * calcHertz(28.0));
        sound += rect(time * calcHertz(31.0));
        sound += rect(time * calcHertz(35.0));
    }
    else
    {
        sound += rect(time * calcHertz(23.0));
        sound += rect(time * calcHertz(26.0));
        sound += rect(time * calcHertz(30.0));
        sound += rect(time * calcHertz(33.0));
    }
    return sound * max(0.0, (1.0 - t * 2.0));
}

vec2 bass(float time)
{
    return vec2(1, 1);
}

vec2 mainSound(float time)
{
    float sound = 0.0;
    sound += bassDrum(time) * 0.5;
    sound += snereDrum(time) * 0.5;
    sound += hiHat(time) * 0.5;
    sound += strings(time) * 0.2;
    if (abs(sound) > 1.0) sound /= abs(sound);
    return vec2(sound);
}

void main() 
{
    float time = gl_VertexID / 44100.0;
    
    out_sample = mainSound(time) * 0.5;
}