#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        int threshold = 4 * n - 3;
        bool condition = (k > threshold);
        int result = (k + condition + 1) >> 1;

        cout << result << endl;
    }
    return 0;
}
