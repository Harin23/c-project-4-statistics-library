#ifndef STATS_H     /* if STATS_H is not defined... */
#define STATS_H     /* ...define it, and process what follows */
#include <stddef.h>
int stats_min(const int *data, size_t n);
int stats_max(const int *data, size_t n);
double stats_mean(const int *data, size_t n);
double stats_median(int *data, size_t n);  /* may reorder data */
#endif
