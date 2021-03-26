#include <stdio.h>

int main(void)
{
    double x, y, a;
    int z, b, i, j;
    scanf("%lf %lf", &x, &y);
    scanf("%d", &z);
    x = x * 1000;
    y = y * 1000;
    b = x * y;
    printf("integer = %d\n", b);
    for (i = 0; i < (6 - z); i ++){
        b = b / 10;
    }
    printf("integer = %d\n", b);
    a = b;
    printf("double = %f\n", a);
    for (j = 0; j < z; j ++){
        a = a / 10;
    }
    printf("double = %f\n", a);
    return 0;
}