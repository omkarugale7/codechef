/*Editor: Omkar Ugale
Time : .  26th jan 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int x, y, z;
      cin >> x >> y >> z;
      cout << (z - y) * x << endl;
   }
   return 0;
}