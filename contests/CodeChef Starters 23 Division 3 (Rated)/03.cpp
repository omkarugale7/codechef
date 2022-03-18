/*Editor: Omkar Ugale
Time : .  26th jan 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int n, k, x;
      cin >> n >> k >> x;
      if (k < x)
         cout << "-1" << endl;
      else
      {
         for (int i = 0; i < n; i++)
            cout << i % x << " ";
         cout << endl;
      }
   }
   return 0;
}