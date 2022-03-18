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
      int n;
      cin >> n;
      string s;
      cin >> s;
      int zeroes = 0, ones = 0;
      for (int i = 0; i < n; i++)
      {
         if (s[i] == '1')
            ones++;
         else
            zeroes++;
      }
      if (((zeroes % 2) != 0 )&&(( ones % 2) != 0) )
     { if(zeroes!=ones)
         cout << "NO" << endl;
      else
         cout << "YES" << endl;}
         else
         cout << "YES" << endl;
   }
   return 0;
}