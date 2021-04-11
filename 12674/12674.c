#include <stdio.h>
int main()
{
    int t, n, max, min, mid;
    int min_index, mid_index, max_index;
    max = 0;
    min = 1000000;
    n = 3;
    scanf("%d",&t);
    for(int i = 0; i < t; i ++){
        int a[n];

        for(int i = 0; i < n; i ++){
           scanf("%d", &a[i]);
        }
        // printf("%d %d %d\n", a[0], a[1], a[2]);
        for(int i = 0; i < n; i ++){
            if(a[i] > max){
                max = a[i];
                max_index = i;
            }
            if(a[i] < min){
                min = a[i];
                min_index = i;
            }
        }
        for (int i = 0; i < n; i++) {
            if(i != max_index && i != min_index){
                mid_index = i;
            }
        }
        printf("%d %d %d\n",min_index , mid_index, max_index);
    }
}   