#include <bits/stdc++.h>
using namespace std;
double x_arr[100000];
double y_arr[100000];

int main() {
    int T, n, x, y;
    cout << fixed << setprecision(8);
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> n;
        int x_idx = 0, y_idx = 0;
        for (int j = 0; j < 2 * n; j++) {
            cin >> x >> y;
            if (x == 0) {
                y_arr[y_idx++] = abs(y);
            } else if (y == 0) {
                x_arr[x_idx++] = abs(x);
            }
        }
        sort(x_arr, x_arr + n);
        sort(y_arr, y_arr + n);
        double sum = 0;
        for (int k = 0; k < n; k++) {
            sum += sqrt(x_arr[k] * x_arr[k] + y_arr[k] * y_arr[k]);
        }
        cout << sum << endl;
    }
}