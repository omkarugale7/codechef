/*Editor: Omkar Ugale
Time : . 11th feb 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int a, b, c, d;
      cin>>a>>b>>c>>d;
      
      if (a * b <= c * d)
         cout << "YES" << endl;
      else
         cout << "NO" << endl;
   }
   return 0;
}