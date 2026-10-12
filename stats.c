#include <stddef.h>
#include <stdlib.h>
#include <string.h>

int stats_min(const int *data, size_t const n) {
    int min = data[0];
    for (size_t i = 0; i < n; i++)
        if (data[i] < min) min = data[i];
    return min;
};

int stats_max(const int *data, size_t const n) {
    int max = data[0];
    for (size_t i = 0; i < n; i++)
        if (data[i] > max) max = data[i];
    return max;
};

double stats_mean(const int *data, size_t const n) {
    double total = 0;

    for (size_t i = 0; i < n; i++)
        total += data[i];
    return total/(double)n;
};

//https://www.geeksforgeeks.org/c/qsort-function-in-c/
static int comp(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;

    if (x < y)
        return -1;
    if (x > y)
        return 1;
    return 0;
}

double stats_median(const int *data, const size_t n) {
    int numbers[n];
    memcpy(numbers, data, sizeof(int) * n);
    qsort(numbers, n, sizeof(data[0]), comp);
    if (n == 1) return data[0];
    size_t const mid_point = (size_t)((double) n / 2);
    if (n % 2 == 0) {
        return ((double) numbers[mid_point] + (double) numbers[mid_point + 1]) / 2;
    };
    return numbers[mid_point];
};
