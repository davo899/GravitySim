#ifndef VEC2_H
#define VEC2_H

#include <math.h>

struct vec2 {
    double x;
    double y;
};

struct vec2 vec2_init(double x, double y);
struct vec2 vec2_init_zero();

struct vec2 add(struct vec2 vector_a, struct vec2 vector_b);
void add_to(struct vec2 *vector, struct vec2 offset);

struct vec2 scale(struct vec2 vector, double factor);

double distance(struct vec2 position_a, struct vec2 position_b);

#endif