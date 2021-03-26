#include <stdio.h>
int main(void)
{
    double x, y, a;
    int z;
    scanf("%lf %lf %d", &x, &y, &z);
    a = x * y;
    printf("%.*f\n", z, a);
    return 0;
}