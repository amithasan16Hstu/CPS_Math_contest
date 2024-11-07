#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M, P;
    cin >> N >> M >> P;
    if (M > N) {
        cout << 0 << endl;
        return 0;
    }

    int days_with_full_moon = ((N - M) / P) + 1;

    cout << days_with_full_moon << endl;
    return 0;
}
