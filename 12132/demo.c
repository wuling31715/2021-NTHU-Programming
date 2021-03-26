#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            printf("%d", a[i]);
        } else {
            printf("%d ", a[i]);
        }        
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            printf("%d", b[i]);
        } else {
            printf("%d ", b[i]);
        }        
    }
    printf("\n");
    int dict[n];
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
    for (int i = 0; i < n; i++)
    {
        printf("%d ", dict[i]);
        /* code */
    }
    printf("\n");
    int output[n];
    int MAX = 0;
    for (int i = 0; i < n; i++)
    {
        if (dict[i] > MAX)
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
