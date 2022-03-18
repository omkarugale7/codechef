/*Editor: Omkar Ugale
Time : . 23th feb 2022 */
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
       if (n%10==0)
      cout<<n/10<<endl;
      else
      cout<<(n/10)+1<<endl;

       
   }
   return 0;
}