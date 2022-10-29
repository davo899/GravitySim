#include "particle.h"

void particle_apply_force(struct particle *particle, struct vec2 force) {
    add_to(&particle->force, force);
}

void particle_step(struct particle *particle) {
    add_to(&particle->position, particle->velocity);
    add_to(&particle->velocity, scale(particle->force, 1 / particle->mass));
}