/*Editor: Omkar Ugale
Time : .  28th jan 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
   int a, b;
   cin >> a >> b;
   if ((a == b) && (a + b) % 2 == 0)
      cout << "Coding" << endl;
   else if ((a != b) && (a + b) % 2 == 0)
      cout << "Chess" << endl;
   else if ((a + b) % 2 != 0)
      cout << "Garden" << endl;

   return 0;
}