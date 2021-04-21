#include<stdio.h>

// 暴力解
int main(void) {
    int N;
    int buy = 0;
    int free = 0;
    int cap = 0;
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

// 速解
// 瓶子：1 2 3 4 5 6 7 8 9 10
// 購買：1 2 3 3 4 5 5 6 7 7
// 相差：0 0 0 1 1 1 2 2 2 3
int main(void) {
    int N, answer;
    scanf("%d\n", &N);
    if (N % 3 == 0) {
        answer = N - (N / 3 - 1);
    } else {
        answer = N - (N / 3);
    }
    printf("%d\n", answer);
    return 0;
}