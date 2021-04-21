#include<stdio.h>

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