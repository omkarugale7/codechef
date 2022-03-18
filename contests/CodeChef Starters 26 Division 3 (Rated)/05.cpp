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
      int n;
      cin >> n;
      char arr[n], brr[n];
      for (int i = 0; i < n; i++)
         cin >> arr[i];
      for (int i = 0; i < n; i++)
         cin >> brr[i];
      sort(arr, arr + n);
      sort(brr, brr + n);
      int as = 0, ae = n - 1, bs = 0, be = n - 1;
      char ansarr[2 * n], ks = 0, ke = 2 * n - 1;
      for (int i = 0; i < 2 * n; i++)
      {
         if (i % 2 == 0)
         {
            if (arr[as] < brr[be])
            {
               ansarr[ks++] = arr[as];
               as++;
            }
            else
            {
               ansarr[ke--] = arr[ae];
               ae--;
            }
         }
         else
         {
            if (i == (2 * n - 1))
            {
               ansarr[ke] = brr[be];
            }

            else if (brr[be] > arr[as])
            {
               ansarr[ks++] = brr[be];
               be--;
            }
            else
            {
               ansarr[ke--] = brr[bs];
               bs++;
            }
         }
      }
      for (int i = 0; i < 2 * n; i++)
         cout << ansarr[i];
      cout << endl;
   }
   return 0;
}