/*Editor: Omkar Ugale
Time : .  22nd jan 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int n; //n = 6
             // 3 2 5 4 7 6 9 8
      cin >> n;
      int a = 3;
      int b = 2;
      for (int i = 0; i < (n / 2); i++)
      {
         cout << a << " ";
         cout << b << " ";
         a += 2, b += 2;
      }
      if (n % 2)
         cout << a++;
      cout << endl;
   }
   return 0;
}