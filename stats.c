#include <stddef.h>

//assumes sorted
int stats_min(const int *data, size_t n) {
    return data[0];
};

int stats_max(const int *data, size_t n) {
    return data[n - 1];
};

double stats_mean(const int *data, size_t n) {
    double total = 0;

    for (int i = 0; i < n; i++)
        total += data[i];
    return total/n;
};

double stats_median(int *data, size_t n) {
    size_t const mid_point = (size_t)((double) n / 2);
    if (n % 2 == 0) {
        return data[mid_point];
    };

    return ((double) data[mid_point] + (double) data[mid_point + 1]) / 2;
};
