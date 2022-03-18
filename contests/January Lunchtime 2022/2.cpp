/*Editor: Omkar Ugale
Time : .  28th jan 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int n, k, ans = 0;
      cin >> n >> k;
      int value = k;
      string s;
      cin >> s;
      for (int i = 0; i < n; i++)
      {
         int j = 10 - (s[i] - '0');
         if (j == 10)
         {
            ans++;
            continue;
         }
         // cout << j << endl;
         if (j > value)
            break;
         while (j <= value)
            j += 10;
         j -= 10;
         value = j;
         ans++;
      }
      cout << ans << endl;
   }
   return 0;
}