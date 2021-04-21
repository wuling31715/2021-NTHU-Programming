#include<stdio.h>

int recur(int n) {
    printf("%d\n", n);
    if (n <= 0) {
        return 0;
    }
    return recur(n - 1) || recur(n - 2);
}

int main(void) {
    recur(2);
    return 0;
}