/*Editor: Omkar Ugale
Time : . 23th feb 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      string s;
      cin >> s;
      int n = s.size();
      int ans = 0;
      int samepalind = 0;
      int start = 0, end = n - 1;
      while (start < end)
      {
         if (s[start] == s[end])
            samepalind++;
         else
            continue;
         start++, end--;
      }
      ans += n - samepalind;
      cout << ans - 1 << endl;
   }
   return 0;
}