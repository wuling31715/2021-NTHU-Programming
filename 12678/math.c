#include <stdio.h>

int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int min(int a, int b) {
    if (a > b) {
        return b;
    } else {
        return a;
    }
}

int countDigitOne(int n)
{
    int countr = 0;
    for (long long i = 1; i <= n; i *= 10) {
        long long divider = i * 10;
        countr += (n / divider) * i + min(max(n % divider - i + 1, 0LL), i);
    }
    return countr;
}

int main(void) {
    int t, a, b;
    scanf("%d\n", &t);
    for (int i = 0; i < t; i++) {
        int count = 0;
        scanf("%d %d\n", &a, &b);
        int MIN = countDigitOne(a - 1);
        int MAX = countDigitOne(b);
        count += (MAX - MIN);
        printf("%d\n", count);
    }
}