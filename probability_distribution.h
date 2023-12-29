

#ifndef probability_distribution_h
#define probability_distribution_h

double unit(void);

double uniform_distribution(double a, double b);

double exponential_distribution(double l);

int32_t bernoulli_distribution(double p);

int32_t binomial_distribution(double p, int32_t n);

#endif
