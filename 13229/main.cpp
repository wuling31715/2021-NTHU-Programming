#include <iostream>     
#include <vector>
using namespace std; 

const int N = 3;    // 元素數量

// vector<int> grayCode(int n) {
//         vector<int>res;
//         for(int i = 0; i < (1 << n); i++) {
//             res.push_back(i ^ (i >> 1));
//         }
//         for(int i=0; i<res.size(); ++i) {
//             cout << res[i] << ' ';
//         }
//         return res;
//     }

// int main() { 
//     grayCode(N);
//     return 0; 
// }

void printTheArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
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
 
int main() {
    int n = 3;
    int arr[n];
    generateAllBinaryStrings(n, arr, 0); 
    return 0;
}