#include <stdio.h> 

int main(void) {
    int t, a, b;
    scanf("%d\n", &t);
    for (int i = 0; i < t; i++) {
        int count = 0;
        scanf("%d %d\n", &a, &b);
        for (int j = a; j < b + 1; j++) {
            int k, r;
            k = j;
            while (k != 0) {
                r = k % 10;
                if (r == 1) {
                    count++;
                }
                k /= 10;
            }
        }
        printf("%d\n", count);
    }
}