#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        int cycle_count = 0;
        vector<bool> visited(n, false);

        for (int i = 0; i < n; ++i) {
            cin >> p[i];
            p[i]--; // convert to 0-based index
        }

        for (int i = 0; i < n; ++i) {
            if (!visited[i] && p[i] != i) {
                int current = i;
                while (!visited[current]) {
                    visited[current] = true;
                    current = p[current];
                }
                cycle_count++;
            }
        }

        if (cycle_count == 0) {
            cout << 0 << "\n";
        } else if (cycle_count == 1) {
            cout << 1 << "\n";
        } else {
            cout << cycle_count << "\n";
        }
    }

    return 0;
}
