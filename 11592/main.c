#include<stdio.h>

int main(void) {
    int N, buy = 0, free = 0, cap = 0;
    scanf("%d\n", &N);
    while (buy + free != N) {
        buy++;
        cap++;
        if (cap / 3 == 1) {
            cap -= 2; // cap += 1, cap -= 3
            free++;
        }
    }
    printf("%d\n", buy);
    return 0;
}