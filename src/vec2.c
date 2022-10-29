#include "vec2.h"

struct vec2 add(struct vec2 vector_a, struct vec2 vector_b) {
    vector_a.x += vector_b.x;
    vector_a.y += vector_b.y;
    return vector_a;
}

void add_to(struct vec2 *vector, struct vec2 offset) {
    vector->x += offset.x;
    vector->y += offset.y;
}

struct vec2 scale(struct vec2 vector, double factor) {
    vector.x *= factor;
    vector.y *= factor;
    return vector;
}

double distance(struct vec2 position_a, struct vec2 position_b) {
    double x_diff = position_a.x - position_b.x;
    double y_diff = position_a.y - position_b.y;
    return sqrt((x_diff * x_diff) + (y_diff * y_diff));
}