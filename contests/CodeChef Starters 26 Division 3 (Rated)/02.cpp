/*Editor: Omkar Ugale
Time : . 16th feb 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int n, x;
      cin >> n >> x;
      int ans =x,fans=x;
      for (int i = 0; i < n; i++)
      {

          int a;
          cin>>a;
          ans+=a;
          fans=max(fans,ans);
      }
      cout<<fans<<endl;
      
   }
   return 0;
}