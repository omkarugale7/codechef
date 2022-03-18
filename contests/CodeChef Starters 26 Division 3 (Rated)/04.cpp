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
      ll n, x, y;
      cin >> n >> x >> y;
      if (x <= y)
      {
         if (n % 100 == 0)
            cout << (n / 100) * x << endl;
         else
            cout << ((n / 100) * x) + x << endl;
      }
      else
      {
         ll warche = n / 100;
         ll ans=0;
         ans += min(warche * x, warche * 25 * y);
         ll rahile = n % 100;
         ll car;
         if (rahile % 4)
            car = rahile / 4 + 1;
            else
            car = rahile / 4  ;
         ans += min(x, car * y);
         cout << ans << endl;
      }
   }
   return 0;
}