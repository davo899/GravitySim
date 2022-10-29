#include "particle.h"

struct particle particle_init(double mass, double x, double y) {
    struct particle particle;
    particle.mass = mass;
    particle.position.x = x;
    particle.position.y = y;
    particle.velocity.x = 0;
    particle.velocity.y = 0;
    particle.force.x = 0;
    particle.force.y = 0;
    return particle;
}

void particle_apply_force(struct particle *particle, struct vec2 force) {
    add_to(&particle->force, force);
}

void particle_step(struct particle *particle) {
    add_to(&particle->position, particle->velocity);
    add_to(&particle->velocity, scale(particle->force, 1 / particle->mass));
}