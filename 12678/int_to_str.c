#include <stdio.h> 
#include <stdlib.h>

int main(void) {
    int t, a, b;
    scanf("%d\n", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d %d\n", &a, &b);
        int count = 0;
        for (int j = a; j < b + 1; j++)
        {
            int length;
            length = snprintf(NULL, 0, "%d", j);
            char str[length];
            sprintf(str, "%d", j);
            for (int k = 0; k < length; k++) {
                if (str[k] == '1') {
                    count++;
                }                
            }
        }        
        printf("%d\n", count);
    }    
}