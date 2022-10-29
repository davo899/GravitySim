#include "particle.h"

struct particle particle_init(double mass, double x, double y) {
    struct particle particle;
    particle.mass = mass;
    particle.position = vec2_init(x, y);
    particle.velocity = vec2_init_zero();
    particle.force = vec2_init_zero();
    return particle;
}

void particle_apply_force(struct particle *particle, struct vec2 force) {
    add_to(&particle->force, force);
}

void particle_step(struct particle *particle) {
    add_to(&particle->position, particle->velocity);
    add_to(&particle->velocity, scale(particle->force, 1 / particle->mass));
}