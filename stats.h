/*
 * stats.h — public interface for the statistics library.
 *
 * Self-contained: declares everything its own prototypes need, so it can be
 * included first, alone, from any file. <stddef.h> is for size_t — other
 * standard headers happen to declare it too, so omitting it would compile
 * today and break the first time this header is included on its own.
 *
 * Verify with: gcc -fsyntax-only -x c stats.h
 */
#ifndef STATS_H     /* if STATS_H is not defined... */
#define STATS_H     /* ...define it, and process what follows */
#include <stddef.h>
int stats_min(const int *data);
int stats_max(const int *data, size_t n);
double stats_mean(const int *data, size_t n);
double stats_median(int *data, size_t n);  /* may reorder data */
#endif
