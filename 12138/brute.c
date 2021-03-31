#include <stdio.h>

int main(void) {
    int n, q, sum;
    scanf("%d %d\n", &n, &q);
    int array[n + 1];
    long prefix_sum[n + 1];
    for (int i = 1; i < n + 1; i++) {
        scanf("%d", &array[i]);
    }
    prefix_sum[0] = 0;
    for (int i = 1; i < n + 1; i++) {
        prefix_sum[i] = prefix_sum[i - 1] + array[i];
        printf("%ld ", prefix_sum[i]);
    }
    printf("\n");
    for (int i = 0; i < q; i++) {
        int l, r, m;
        int sum = 0;
        int count = 0;
        int max = 0;
        scanf("%d %d %d\n", &l, &r, &m);
        for (int j = l; j < r + 1; j++) {
            if (array[j] > 0) {
                sum += array[j];
                count += 1;
                if (count >= m) {
                    break;
                }
            } else {
                break;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}
