#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    for (long long i = 0; i < t; i++) {
        long long n;
        cin >> n;
        n += 1;
        cout << (n * n + 1) << endl;
    }
    return 0;
}
