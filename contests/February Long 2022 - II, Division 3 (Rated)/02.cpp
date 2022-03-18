/*Editor: Omkar Ugale
Time : . 11th feb 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int n;
      cin >> n;
      string s;
      cin >> s;
      int ans = 0, sp = 0;
      for (int i = 0; i < s.size(); i++)
      {
         if (s[i] == 'C')
         {
            // cout<<"aa"<<endl;
            ans += 2;
         }
         else if (s[i] == 'D')
            ans++, sp++;
         else
            sp+=2;
      }
      // cout << ans << " " << sp << endl;
      if (ans > sp)
         cout << 60 * n << endl;
      else if (ans == sp)
         cout << 55 * n << endl;
      else
         cout << 40 * n << endl;
   }
   return 0;
}