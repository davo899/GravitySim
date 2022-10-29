#include "particle.h"

void particle_apply_force(struct particle *particle, struct vec2 force) {
    add_to(&particle->force, force);
}