

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "probability_distribution.h"

#define N (10)

int main(void) {
    srand(time(NULL));
    rand();

    for(int i = 0; i < N; i++) {
        printf("X_%d = %6.2lf\n", i, exponential_distribution(1));
    }

    for(int i = 0; i < N; i++) {
        printf("Y_%d = %d\n", i, binomial_distribution(0.1f, 15));
    }
    return 0;
}