#include <bits/stdc++.h>
using namespace std;

int find_loneliness(const vector<int> arr, int n) {
    
    for (int k = 1; k <= n; k++) {
        int target_or = -1;
        bool all_same = true;
        for (int i = 0; i <= n - k; i++) {
            int current_or = 0;
            for (int j = i; j < i + k; j++) {
                current_or |= arr[j];
            }
            if (target_or == -1) {
                target_or = current_or;
            } else if (target_or != current_or) {
                all_same = false;
                break;
            }
        }
        if (all_same) {
            return k;
        }
    }
    return n;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << find_loneliness(arr, n) << "\n";
    }
   
    return 0;
}
