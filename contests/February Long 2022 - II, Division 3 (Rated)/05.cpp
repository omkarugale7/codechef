/*Editor: Omkar Ugale
Time : . 12th feb 2022 */
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
      for (int i = 0; i < n; i++)
      {
         for (int j = i; j < n; j++)
         {
            if (arr[i] > arr[j] && arr[i] & arr[j])
            {
               swap(arr[i], arr[j]);
            }
         }
      }
      for (int i = 0; i < n; i++)
         cout << arr[i] << " ";
      cout << endl;
   }
   return 0;
}