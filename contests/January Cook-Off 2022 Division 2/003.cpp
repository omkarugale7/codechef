/*Editor: Omkar Ugale
Time : .  22nd jan 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
ll longlo(ll arr[], ll n)
{

   ll ans = 1, maxno = 0;
   for (ll i = 1; i < n; i++)
   {
      if (arr[i - 1] <= arr[i])
      {
         ans++;
         maxno = max(maxno, ans);
      }
      else
         ans = 1;
   }
   return ans;
}
int main()
{
   ll t;
   cin >> t;
   while (t--)
   {
      ll n, m;
      cin >> n >> m;
      ll arr[n];
      for (ll i = 0; i < n; i++)
         cin >> arr[i];
      ll brr[m];
      for (ll i = 0; i < m; i++)
         cin >> brr[i];
      cout << longlo(arr, n) + longlo(brr, m) << endl;
   }
   return 0;
}