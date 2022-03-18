/*Editor: Omkar Ugale
Time : . 9th feb 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int mostsigbit(ll n)
{
   ll mx = 0;
   for (int i = 0; i < 32; i++)
   {
      if ((1 << i) == n)
      {
         return (i + 1);
      }
      if (((1 << i) & n) == (1 << i))
      {
         if (n == i)
         {
            mx = i;
         }
         else
            mx = i + 1;
      }
   }
   return mx + 1;
}
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      ll x, m;
      cin >> x >> m;
      if (msb(x) <= m)
         cout << m - msb(x) + 1<<endl;
         else
         cout<<0<<endl;
   }
   return 0;
}