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
      int k, n;
      cin >> k >> n;
      int arr[n];
      vector<int> ans;
      for (int i = 0; i < n; i++)
         cin >> arr[i];
      int start = 0, end = arr[0];
      for (int i = 0; i < n; i++)
      {
         while (start < end)
         {
            // cout<<end<<endl;
            ans.push_back(end);
            end--;
         }
         start = arr[i];
         end = arr[i + 1];
         // cout<<i<<" "<<start<<" "<<end<<endl;
      }
      for (int i = 0; i < k; i++)
         cout << ans[i] << " ";
      cout << endl;
   }
   return 0;
}