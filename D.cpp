#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin >> t;

   while (t--)
   {
      int a, b;
      cin >> a >> b;

      if ((a % 2 == 0 && 2 * b != a) || (b % 2 == 0 && 2 * a != b))
         cout << "YES" << endl;
      else
         cout << "NO" << endl;
   }

}
