#ifndef GRAVITY_H
#define GRAVITY_H

#include "vec2.h"
#include "particle.h"

double gravitational_force(struct particle *particle_a, struct particle *particle_b);

#endif