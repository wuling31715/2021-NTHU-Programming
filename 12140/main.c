#include <stdio.h>
#include <string.h>

int main(void)
{
    int count = 0;
    int i, j = 0;
    char str[100], str1[20];
    printf("Enter the string:\n");
    scanf(" %[^\n]s", str);
    printf("Enter the substring to be matched:\n");
    scanf(" %[^\n]s", str1);
    int k = strlen(str1);
    int n = strlen(str);
    for (i = 0; i < n; i++)
    {
        while (str[i] == str[j])
        {
            j ++;
        }
        if (j == k)
        {
            count ++;
            j = 0;
        }
    } 
    printf("%d\n", count);
    return 0;
}