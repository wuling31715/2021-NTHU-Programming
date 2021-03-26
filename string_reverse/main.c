#include <stdio.h>

int main(void) {
    char string[10];
    scanf("%s", string);
    for (int i = 0; i < sizeof(string); i++)
    {
        printf("%c", string[i]);
    }
    printf("\n");
    for (int i = sizeof(string); i >= 0 ; i--)
    {
        printf("%c", string[i]);
    }
    printf("\n");
}