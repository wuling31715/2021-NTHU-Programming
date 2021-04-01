#include<stdio.h>

int main(void){
    int d = 1;
    long ld = 1;
    long long lld = 1;

    for (int i = 0; i < 9; i++)
    {
        d *= 10;
    }
    printf("integer = %d\n", d);
    for (int i = 0; i < 10; i++)
    {
        d *= 10;
    }
    printf("integer = %d\n", d);

    for (int i = 0; i < 15; i++)
    {
        ld *= 10;
    }
    printf("long integer = %ld\n", ld);
    for (int i = 0; i < 16; i++)
    {
        ld *= 10;
    }
    printf("long integer = %ld\n", ld);
    
    for (int i = 0; i < 18; i++)
    {
        lld *= 10;
    }
    printf("long long integer = %lld\n", lld);
    for (int i = 0; i < 19; i++)
    {
        lld *= 10;
    }
    printf("long long integer = %lld\n", lld);

    return 0;
}