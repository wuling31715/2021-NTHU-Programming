#include <stdio.h>

int get_min(int n, int array[]) {
    int min = 1000000000;
    for (int i = 0; i < n; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

int get_max(int n, int array[]) {
    int max = 0;
    for (int i = 0; i < n; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

int main(void) {
    int t;
    scanf("%d\n", &t);
    for (int i = 0; i < t; i++) {
        int n, m, k;
        scanf("%d %d %d\n", &n, &m, &k);
        int array[n];
        for (int j = 0; j < n; j++) {
            scanf("%d", &array[j]);
            printf("%d ", array[j]);
        }
        printf("\n");

    }
    return 0;
}