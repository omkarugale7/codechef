/*Editor: Omkar Ugale
Time : . 23th feb 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int arr[3];
      for (int i = 0; i < 3; i++)
         cin >> arr[i];
      sort(arr, arr + 3);
      cout << arr[1] + arr[2] << endl;
   }
   return 0;
}