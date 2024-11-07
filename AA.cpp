#include <bits/stdc++.h>
using namespace std;

int main() {
    long long T, n, k, x;
    cin >> T;
    
    while (T--) {
        cin >> n >> k >> x;
        
        long long sum_min = k * (k + 1) / 2; 
        long long sum_max = (n - k + 1 + n) * k / 2; 
        
        if (sum_min > x || sum_max < x) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    
    return 0;
}
