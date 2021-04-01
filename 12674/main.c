#include <stdio.h>

int get_min(int a, int b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

int main(void) {
    int t;
    scanf("%d\n", &t);
    for (int i = 0; i < t; i++) {
        int n = 3;
        int array[n];
        int min = 1000000000;
        int max = 0;
        int min_index, mid_index, max_index;
        int count = 0;
        scanf("%d %d %d\n", &array[0], &array[1], &array[2]);
        for (int i = 0; i < n; i++) {
            if (array[i] > max) {
                max = array[i];
                max_index = i;
            }
            if (array[i] < min) {
                min = array[i];
                min_index = i;
            }
        }
        for (int i = 0; i < n; i++) {
            if (i != min_index && i != max_index) {
                mid_index = i;
            }
        }
        if (array[min_index] + array[mid_index] <= array[max_index]) {
            count = array[min_index] + array[mid_index];
        } else {
            int diff = array[max_index] - array[mid_index];
            array[max_index] -= diff;
            array[min_index] -= diff;
            count = diff + array[min_index] / 2 + array[max_index];
        }
        printf("%d\n", count);
    }
    return 0;
}