#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int n;
    scanf("%d\n", &n);
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    int dict[n];
    // qsort(a, n, sizeof(int), cmpfunc);
    // for (int i = 0; i < n; i++) {
    //     printf("%d", a[i]);
    // }
    // printf("\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (b[i] == a[j])
            {
                dict[i] = j;
                break;
            }
        }
    }
    int output[n];
    int MAX = 0;
    for (int i = 0; i < n; i++)
    {
        if (dict[i] >= MAX)
        {
            output[i] = dict[i] + 1 - MAX;
            MAX = dict[i] + 1;
        } else {
            output[i] = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            printf("%d", output[i]);
        } else {
            printf("%d ", output[i]);
        }        
    } 
    printf("\n");
    return 0;
}