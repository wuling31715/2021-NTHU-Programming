#include <stdio.h>

int main(void) {
    int t, a, b, n;
    n = 1000000;
    int array[n + 1];
    int prefix[n + 1];
    for (int i = 0; i < n + 1; i++) {
        int count = 0;
        int r = 0;
        int j = i;
        while (j != 0) {
            r = j % 10;
            if (r == 1) {
                count += 1;
            }
            j /= 10;
        }
        array[i] = count;
    }
    prefix[0] = 0;
    for (int i = 1; i < n + 1; i++) {
        prefix[i] = prefix[i - 1] + array[i];
    }
    scanf("%d\n", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d %d\n", &a, &b);
        printf("%d\n", prefix[b] - prefix[a - 1]);
    }
    return 0;
}