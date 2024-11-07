#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;
        
        y += x;
        
        int result = ((y + z) % 2 != 0) ? -1 : (y + min(y, z))/2;
        
        cout << result << endl;
    }
    return 0;
}
