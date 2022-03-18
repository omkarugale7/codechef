/*Editor: Omkar Ugale
Time : .  28th jan 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
const int z = 100000;
int arrr[z + 1] = {0};
void sieve(int n)
{
   int count = 0, k = 0, p = 0;
   int arr[n + 1] = {0};
   for (int i = 2; i <= sqrt(n); i++)
   {
      if (arr[i] == 0)
      {
         for (int j = (i * i); j <= n; j += i)
         {
            arr[j] = i;
         }
      }
   }
   for (int i = 2; i <= n; i++)
   {
      if (arr[i] == 0)
      {
         p++;
         arrr[i] = p;
      }
      else
         arrr[i] = p;
   }
}
bool isPrime(int n)
{
   // Corner case
   if (n <= 1)
      return false;
   // Check from 2 to square root of n
   for (int i = 2; i <= sqrt(n); i++)
      if (n % i == 0)
         return false;

   return true;
}
int main()
{
   sieve(z);
   // for (int i = 0; i < 100; i++)
   // {
   //    cout << i<<" "<<arrr[i] << endl;
   // }

   int t;
   cin >> t;
   while (t--)
   {
      int n;
      cin >> n;
      int arr[n];
      int ans = 1, k = 0;
      for (int i = 0; i < n; i++)
      {
         cin >> arr[i];
         if (isPrime(i + 1))
            k = arr[i] - arrr[arr[i]];
         else
            k = arrr[arr[i]];
         ans = ((ans % 1000000007) * (k % 1000000007))%1000000007;
         // cout << k << " " << i << endl;
      }
      cout << ans << endl;
   }
   return 0;
}