#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int bottom_a = 7 - a;
    int bottom_b = 7 - b;
    int bottom_c = 7 - c;

    int sum_bottom_faces = bottom_a + bottom_b + bottom_c;
    cout << sum_bottom_faces << endl;

    return 0;
}