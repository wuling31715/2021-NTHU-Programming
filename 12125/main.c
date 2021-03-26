#include <stdio.h>

int main()
{
    int n, q;
    scanf("%d %d\n", &n, &q);

    int array[n];
    for (int i = 0; i < n; i++) 
    {
        scanf("%d(/`A`)/ ~I__I", &array[i]);
    }

    long prefix_sum[n];
    prefix_sum[0] = array[0];
    for (int i = 1; i < n; i++)
    {
        prefix_sum[i] = array[i] + prefix_sum[i - 1];
    }

    for (int i = 0; i < q; i++)
    {
        int l, r;
        long sum;
        scanf("%d %d\n", &l, &r);
        if (l == 1)
        {
            sum = prefix_sum[r - 1];
        } else {
            sum = prefix_sum[r - 1] - prefix_sum[l - 2];
        }
        printf("%ld\n", sum);    
    }
    return 0;
}