#version 450

#define PI 3.1415926535

out vec2 out_sample;

void main() 
{

    out_sample = vec2(1, 1) * sin(gl_VertexID / 44100.0 * PI * 2 * 440.0f) * 0.1;
}