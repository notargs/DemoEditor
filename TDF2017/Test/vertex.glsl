#version 450

layout (location = 0) in vec4 in_pos;
uniform vec2 resolution;

out vec2 pos;

void main() {
    gl_Position = in_pos;
    pos = vec2(in_pos.x * resolution.x / resolution.y, in_pos.y);
}