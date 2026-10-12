#include <stdio.h>
#include "stats.h"

//doing it with out malloc
#define MAX_VALUES 1024

int main() {
    size_t n = 0;
    int numbers[MAX_VALUES];
    int v;
    while (scanf("%d", &v) == 1) {
        if (n >= MAX_VALUES) {
            fprintf(stderr, "Too many values entered\n");
            return 1;
        }

        numbers[n] = v;
        n++;
    }

    if (n == 0) {
        fprintf(stderr, "No values entered\n");
        return 1;
    }

    printf("min: %d", stats_min(numbers, n));
    printf("\nmax: %d", stats_max(numbers, n));
    printf("\nmean: %.2lf", stats_mean(numbers, n));
    printf("\nmedian: %.2lf\n", stats_median(numbers, n));

    return 0;
}
