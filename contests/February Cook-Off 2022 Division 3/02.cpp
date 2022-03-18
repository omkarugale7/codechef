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
      int n, w;
      cin >> n >> w;
      int arr[n];
      for (int i = 0; i < n; i++)
         cin >> arr[i];
      int s = 0,ans=0;
      sort(arr, arr + n);
      for (int i = n - 1; i >= 0; i--)
      {
         if (s >= w)
         {
           ans=i+1;
            break;
         }
         s += arr[i];
      }
      cout<<ans<<endl;
   }
   return 0;
}