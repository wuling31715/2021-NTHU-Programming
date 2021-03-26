#include <stdio.h>

int main(void)
{
    int n;
    int array[10];
    scanf("%d", &n);
    printf("%d = ", n);
    int i = 0;
    while (n != 0) {
        array[i] = n % 2;
        n /= 2;
        i++;
    }
    i--;
    for (; i >= 0; i--)
    {
        printf("%d ", array[i]);
    }
    printf("\n");    
    return 0;
}
