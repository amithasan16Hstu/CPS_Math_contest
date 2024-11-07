#include <bits/stdc++.h>
using namespace std;
int main()
{
   int N, a,flag = false;
   cin >> N;
   int array[N];
   for (int i = 0; i < N; i++)
   {
      cin >> array[i];
      if (array[i] < 0)
         array[i] = array[i] * -1;
      if (array[i] == 0)
         flag = true;
   }
   if (flag == true)
      cout << "0"<<endl;
   else
   {
      sort(array, array + N);
      a = array[0];
      cout << a;
   }
}