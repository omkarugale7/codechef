 
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
      int frequency[100000]={0};
      for (int i = 0; i < 2 * n; i++)
      {
         int x;
         cin >> x;
         frequency[x]++;
      }
      bool flag = true;
      for (int i = 0; i <=n; i++)
      {
         if (frequency[i] == 0)
         {
            break;
         }
        else if (frequency[i] == 1)
         {
            flag = false;
            break;
         }
      }
      if (flag)
         cout << "YES" << endl;
      else
         cout << "NO" << endl;
   }
   return 0;
}