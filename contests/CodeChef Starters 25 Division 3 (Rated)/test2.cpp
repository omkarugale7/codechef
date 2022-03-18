 
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
   int tt;
   cin >> tt;
   while (tt--)
   {
      ll x, m;
      cin >> x >> m;
      ll mexxx = 0, ans=0, anss = 0;
      for (int i = 0; i < 32; i++)
      {
         if ((1 << i) == x)
         {
            anss = (i + 1);
         }
         if (((1 << i) & x) == (1 << i))
         {
            if (x == i)
            {
               mexxx = i;
            }
            else
               mexxx = i + 1;
         }
      }
      if (anss!=0)
         ans = anss;
      else
         ans = mexxx + 1;
      if (ans <= m)
         cout << m - ans + 1 << endl;
      else
         cout << 0 << endl;
   }
   return 0;
}