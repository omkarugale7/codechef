 
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
      set<int> xx;
      set<int> yy;

      for (int i = 0; i < n; i++)
      {
         int x, y;
         cin >> x >> y;
         xx.insert(x);
         yy.insert(y);
      }
      cout<<xx.size()+yy.size()<<endl;
   }
   return 0;
}