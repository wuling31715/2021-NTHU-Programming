#include <stdio.h>
int N = 3;   

void printTheArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
 
void generateAllBinaryStrings(int n, int arr[], int i) {
    if (i == n) {
        printTheArray(arr, n);
        return;
    }
    arr[i] = 0;
    generateAllBinaryStrings(n, arr, i + 1);
    arr[i] = 1;
    generateAllBinaryStrings(n, arr, i + 1);
}
 
int main(void) {
    int n, k;
    while(scanf("%d %d", &n, &k) != EOF) {
        int arr[n];
        printf("%d %d\n", n, k);
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
	return 0;
    // int n;
    // scanf("%d", &n);
    // printf("%d\n", n);
    // int arr[n];
    // generateAllBinaryStrings(n, arr, 0); 
    // return 0;
}