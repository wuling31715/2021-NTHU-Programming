#include <iostream>  
using namespace std;  
   
int N;  
int ans[12];  
int used[12];  
   
bool conflict(int, int);  
void queen(int);  
   
int main() {  
    while (cin >> N) {  
        queen(0);  
    }  
    return 0;  
}  
   
bool conflict(int r, int c) {  
    for (int i=0; i<r; i++)  
        if ((abs(ans[i] - c) == 0) || (abs(ans[i] - c) == r-i))  
            return true;  
    return false;  
}  
   
void queen(int d) {  
    if (d == N) {  
        cout << ans[0];  
        for (int i=1; i<N; i++) {
            cout << " " << ans[i];  
        }              
        cout << endl;  
        return;  
    }  
    for (int i=1; i<=N; i++) {  
        if ((used[i] == 1) || conflict(d, i)) {  
            continue;  
        }  
        used[i] = 1;  
        ans[d] = i;  
        queen(d+1);  
        used[i] = 0;  
    }  
}  