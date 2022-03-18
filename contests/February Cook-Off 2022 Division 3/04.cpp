/*Editor: Omkar Ugale
Time : . 22th feb 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int n, k;
      cin >> n >> k;
      if (k < 1 || k > n)
         cout << "-1" << endl;
      else if (n == k)
      {
         for (int i = 1; i <= n; i++)
            cout << i << " ";
         cout << endl;
      }
      else
      {
         vector<int> ans;
         ans.push_back(n);
         int normal = n - k;
         int z = k - 1;
         int temp = n - z;
         for (int i = 1; i < normal; i++)
            ans.push_back(i);
         for (int i = normal + 1; i < n; i++)
            ans.push_back(i);
         ans.push_back(normal);
         for (int i = 0; i < n; i++)
         cout<<ans[i]<<" ";
         cout<<endl;
         
      }
   }
   return 0;
}