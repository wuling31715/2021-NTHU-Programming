#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d\n", &n);
    int a[n], b[n], array[n + 1], output[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < n + 1; i++) {
        array[i] = 1;
    }
    int MAX = 0;
    for (int i = 0; i < n; i++) {
        int count = 0;
        if (array[b[i]] == 0) {
            output[i] = count;
        } else {
            for (int j = MAX; j < n; j++) {
                    array[a[j]] = 0;
                    count++;
                if (b[i] == a[j]) {
                    MAX = j + 1;
                    output[i] = count;
                    break;
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (i != n - 1) {
            printf("%d ", output[i]);
        } else {
            printf("%d", output[i]);
        }
    }
    printf("\n");
    return 0;
}