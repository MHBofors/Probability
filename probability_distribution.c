#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include "probability_distribution.h"

#define TOL 1e-6

uint32_t factorial(uint32_t n) {
    uint32_t product = 1;

    for(int i = 2; i < n; i++) {
        product *= i;
    }
    return product;
}

uint32_t C(uint32_t n, uint32_t k) {
    return factorial(n) / (factorial(k)*factorial(n - k));
}

double unit(void) {
    return ((double)rand()/(double)RAND_MAX);
}

double uniform_distribution(double a, double b) {
    return ((double)rand()/(double)RAND_MAX) * (b - a) + a;
}

double exponential_distribution(double l) {
    return -log(1 - unit())/l;
}

int32_t bernoulli_distribution(double p) {
    return (unit() < p);
}