#include <stdio.h>
int main()
{
    int cap = 0; 
    int n;
    int ans = 0;
    int change = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i ++){
        cap ++;
        if (cap != 0 && cap % 3 == 0){
            change ++;
        }
        if (change != 0 && change % 3 == 0){
            change ++;
        }
        if ((cap % 3) + (change % 3) == 0){
            change ++;
        }
        ans = cap + change;
        if (ans >= n){
            printf("%d\n", cap);
            break;
        }
    }
    if (n == 0){
        printf("%d\n",n);
    }
}