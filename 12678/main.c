#include <stdio.h> 

int countDigitOne(int n) {    
  if (n <= 0) {
    return 0;
  }
  if (n < 10) {
    return 1;
  }
  long ctx = 10;
  int ctx_count = 1;
  while (n >= (ctx * 10)) {
    ctx_count = ctx_count * 10 + ctx;
    ctx *= 10;
  }
  int count = ctx_count;
  if (n >= (2 * ctx)) {
    count += count * 2 + count * (n / ctx - 2) + ctx - count;
    int low_n = countDigitOne(n % ctx);
    count += low_n;
  } else {
    int low_n = countDigitOne(n - ctx);
    count += low_n * 2 + (n - (ctx - 1)) - low_n;
  }
  return count;
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