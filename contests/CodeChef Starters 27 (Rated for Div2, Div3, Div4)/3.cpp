
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
      string temp = s;
      reverse(s.begin(), s.end());
      int ans = 0, j = s.size() - 1,i = s.size() - 1;
      while(i>=0)
      {
         while (i >= 0 && s[i] != temp[j])
         {
            i--;
            ans++;
         }
         if (i >= 0) 
            i--, j--; 
      }
      cout << ans << endl;
   }
   return 0;
}
