/*Editor: Omkar Ugale
Time : . 9th feb 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int x, y;
      cin >> x >> y;
      if (y <= x)
         cout << y << endl;
      else
      {
         while (y > x)
         {
            y =y- x - 1;
         }
         cout << y << endl;
      }
   }
   return 0;
}