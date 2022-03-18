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
      int arr[n];
      for (int i = 0; i < n; i++)
         cin >> arr[i];
      int brr[n];
      for (int i = 0; i < n; i++)
      {
         brr[i] = arr[i] - i - 1;
      }
      int cnt = 0, k = 0;
      for (int i = 0; i < n; i++)
      {
         if (brr[i] == k)
         {
            cnt++, k++;
         }
      }
      cout << cnt << endl;
   }
   return 0;
}