#include <stdio.h>

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

int convert(int number, int base){
    if (number == 0 || base == 10) {
        return number;
    }
    return (number % base) + 10 * convert(number / base, base);
}

int get_last_digit(int n) {
    return n % 10;
}

void combination(int n, int arr[]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= n; j++) {
            int sum = arr[i] * j;
            printf("%d %d %d", arr[i], j, sum);
            printf("\n");
        }
    }
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
            // int x = convert(arr[i], k);
            // x = get_last_digit(x);
            printf("%d ", arr[i]);
        }
        combination(n, arr);
        printf("\n");
        // int arr[n];
        // generateAllBinaryStrings(n, arr, 0); 
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