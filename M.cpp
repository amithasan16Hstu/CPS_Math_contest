#include <cmath>
#include <iostream>
using namespace std;

int main() {
  {
    long long x = pow(15, 15);
    cout << x << endl;
  }
  {
    long long x = 1;
    for (int i = 0; i < 15; i++) x *= 15;
    cout << x << endl;
  }
}
