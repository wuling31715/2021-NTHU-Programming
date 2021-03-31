#include <stdio.h>

int main(void) {
    int n, q, sum;
    scanf("%d %d\n", &n, &q);
    int array[n + 1];
    long prefix_sum[n + 1];
    for (int i = 1; i < n + 1; i++) {
        scanf("%d", &array[i]);
    }
    int max_index = 0;
    prefix_sum[0] = 0;
    for (int i = 1; i < n + 1; i++) {
        prefix_sum[i] = prefix_sum[i - 1] + array[i];
        if (prefix_sum[i] > prefix_sum[i - 1]) {
            max_index = i;
        }
    }
    for (int i = 0; i < q; i++) {
        int l, r, m;
        long sum = 0;
        scanf("%d %d %d\n", &l, &r, &m);
        if (l + m - 1 <= max_index) {
            sum = prefix_sum[l + m - 1] - prefix_sum[l - 1];
        } else if (l <= max_index && l + m - 1 >= max_index) {
            sum = prefix_sum[max_index] - prefix_sum[l - 1];
        } else if (l + m - 1 > max_index) {
            sum = 0;
        }
        printf("%ld\n", sum);
    }
    return 0;
}