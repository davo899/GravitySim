#ifndef VEC2_H
#define VEC2_H

struct vec2 {
    double x;
    double y;
}

struct vec2 add(struct vec2 vector_a, struct vec2 vector_b);
void add_to(struct vec2 *vector, struct vec2 offset);

struct vec2 scale(struct vec2 vector);

#endif