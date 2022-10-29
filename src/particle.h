#ifndef PARTICLE_H
#define PARTICLE_H

#include "vec2.h"

struct particle {
    double mass;
    struct vec2 position;
    struct vec2 velocity;
    struct vec2 force;
};

void particle_apply_force(struct particle *particle, struct vec2 force);

#endif