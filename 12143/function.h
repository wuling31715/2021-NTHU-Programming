#ifndef _FUNCTION_H_
#define _FUNCTION_H_

int binarySearch(int arr[], int l, int r, int x) {
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x) {
            return mid;
        }
        if (arr[mid] > x) {
            return binarySearch(arr, l, mid - 1, x);
        }
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}

int BS(int* input, int q, int n) {
    int ans;
    ans = binarySearch(input, 0, n - 1, q);
    return ans;
}

#endif
