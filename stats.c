#include <stddef.h>

//assumes sorted
int stats_min(const int *data) {
    return data[0];
};

int stats_max(const int *data, size_t const n) {
    return data[n - 1];
};

double stats_mean(const int *data, size_t const n) {
    double total = 0;

    for (int i = 0; i < n; i++)
        total += data[i];
    return total/(double)n;
};

double stats_median(const int *data, const size_t n) {
    size_t const mid_point = (size_t)((double) n / 2);
    if (n % 2 == 0) {
        return data[mid_point];
    };

    return ((double) data[mid_point] + (double) data[mid_point + 1]) / 2;
};
