#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll cal(ll m, string s)
{
   ll add = 0;
   for (int i = m; i >= 0; i--)
   {
      ll v = (int(s[i]) - int('0') + add) % 10;
      if (v == 0)
         continue;
      add += 10 - v;
   }
   return add;
}

int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      ll n, k;
      cin >> n >> k;
      string str;
      cin >> str;
      ll l = 0, r = n - 1, ans = 0;
      while (l <= r)
      {
         ll m = (l + r) / 2;
         if (cal(m, str) > k)
            r = m - 1;
         else
         {
            ans = m + 1;
            l = m + 1;
         }
      }
      cout << ans << endl;
   }
}