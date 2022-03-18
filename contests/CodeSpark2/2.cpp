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
      int n;
      cin >> n;
      map<string, int> arr;
      for (int i = 0; i < n; i++)
      {
         string s;
         cin >> s;
         arr[s] = arr[s] + 1;
      }
      int maxno = 0;
      string ans;
      for (auto pr : arr)
      {
         maxno = max(maxno, pr.second);
         if (maxno == pr.second)
            ans = pr.first;
      }
      if (maxno>=n/2)
      cout<<ans<<endl;
      else
      cout<<-1<<endl;
      
   }
   return 0;
}