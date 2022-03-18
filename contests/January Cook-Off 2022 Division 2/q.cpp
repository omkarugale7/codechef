#include <bits/stdc++.h>
using namespace std;
int SieveOfEratosthenes(int n)
{
   bool prime[n + 1];
   memset(prime, true, sizeof(prime));
   for (int p = 2; p * p <= n; p++)
   {
      if (prime[p] == true)
      {
         for (int i = p * p; i <= n; i += p)
            prime[i] = false;
      }
   }
   for (int p = n; p >= 2; p--)
      if (prime[p])
         return p;
}
void solve()
{
   int n;
   cin >> n;
   int x = 2;
   cout << (SieveOfEratosthenes(n - 1) * n) / 2 << endl;
}
int main()
{
   long long int t;
   cin >> t;
   while (t--)
   {
      solve();
   }
   return 0;
}