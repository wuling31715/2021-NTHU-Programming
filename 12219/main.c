#include<stdio.h>
#include<stdlib.h>

long long fastPower(long long a, long long b, long long n) {
    // write your code here
    long long p = a, ans = 1;
    while(n) {
        if(n&1) { //奇数
            ans = (ans * p) % b;
        }   
        p = (p * p) % b;
        n /= 2;
    }
    return ans % b;
}

int main(void) {
    long long x, y, m, ans;
    scanf("%lld %lld %lld\n", &x, &y, &m);
    // printf("%lld %lld %lld\n", x, y, m);
    ans = fastPower(x, m, y);
    printf("%lld\n", ans);
    return 0;
}