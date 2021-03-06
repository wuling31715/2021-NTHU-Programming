#ifndef _FUNCTION_H_
#define _FUNCTION_H_
// 二元搜索只適用於「已排序」序列，時間複雜度為O(logN)
// eg. 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
int binarySearch(int arr[], int l, int r, int x) {
    if (r >= l) { // 右必須大於左，否則終止遞迴
        int mid = l + (r - l) / 2; // 中位數
        if (arr[mid] == x) { // 找到目標
            return mid;
        }
        if (arr[mid] > x) { // 中位數 > 目標：向左搜索
            return binarySearch(arr, l, mid - 1, x);
        }
        if (arr[mid] < x) { // 中位數 < 目標：向右搜索
            return binarySearch(arr, mid + 1, r, x);
        }
    }
    return -1; // 找不到目標
}

int BS(int* input, int q, int n) {
    int ans;
    ans = binarySearch(input, 0, n - 1, q);
    return ans;
}

#endif
