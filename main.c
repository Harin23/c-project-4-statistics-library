#include <stdio.h>
#include <stdlib.h>
#include "stats.h"

//doing it with out malloc
#define MAX_VALUES 1024


//https://www.geeksforgeeks.org/c/qsort-function-in-c/
int comp(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;

    if (x < y)
        return -1;
    if (x > y)
        return 1;
    return 0;
}

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
    //
    // for (int i = 0; i < n; i++)
    //     printf("%d ", numbers[i]);

    qsort(numbers, n, sizeof(numbers[0]), comp);

    // printf("\n\n");
    // for (int i = 0; i < n; i++)
    //     printf("%d ", numbers[i]);

    printf("min: %d", stats_min(numbers, n));
    printf("\nmax: %d", stats_max(numbers, n));
    printf("\nmean: %.2lf", stats_mean(numbers, n));
    printf("\nmedian: %.2lf\n", stats_median(numbers, n));

    return 0;
}
