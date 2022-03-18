// https://www.codechef.com/SPRK2022/problems/PICTCC3

/*Editor: Omkar Ugale
Time : .  28th jan 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
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
   int t;
   cin >> t;
   while (t--)
   {
      int n;
      cin >> n;
      int arr[n];
      for (int i = 0; i < n; i++)
         cin >> arr[i];
      vector<int> primes;
      vector<int> nonprimes;
      for (int i = 0; i < n; i++)
      {
         if (isPrime(i + 1))
            primes.push_back(arr[i]);
         else
            nonprimes.push_back(arr[i]);
      }
      // for (int i = 0; i < primes.size(); i++)
      //    cout << primes[i] << " ";
      // cout << endl;
      // for (int i = 0; i < nonprimes.size(); i++)
      //    cout << nonprimes[i] << " ";
      // cout << endl;
      sort(primes.begin(), primes.end());
      sort(nonprimes.begin(), nonprimes.end());
      while (isPrime(primes[0]))
      {
         primes[0]--;
      }
      while (!(isPrime(nonprimes[0])))
      {
         nonprimes[0]--;
      }

      int totprimes = primes[0] * primes.size();
      int totnonprimes = nonprimes[0] * nonprimes.size();
      // cout << primes[0] << " " << primes.size() << " " << nonprimes[0] << " " << nonprimes.size() << endl;
      // cout << totnonprimes << totprimes << endl;
      cout << totnonprimes + totprimes << endl;
   }
   return 0;
}