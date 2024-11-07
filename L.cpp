#include <bits/stdc++.h>
using namespace std;

int main()
{
   int N;
   cin >> N;

   int nearest = (N + 2) / 5 * 5;
   if (N % 5 <= 2)
   {
      nearest = N / 5 * 5;
   }

   cout << nearest << endl;

   return 0;
}
