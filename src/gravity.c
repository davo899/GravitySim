#include "gravity.h"

double gravitational_force(struct particle *particle_a, struct particle *particle_b) {
    double dist = distance(particle_a->position, particle_b->position);
    return (particle_a->mass * particle_b->mass) / (dist * dist);
}