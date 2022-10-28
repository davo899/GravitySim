#ifndef GRAVITY_H
#define GRAVITY_H

#include "vec2.h"

struct particle {
    double mass;
    struct vec2 position;
    struct vec2 velocity;
}

#endif