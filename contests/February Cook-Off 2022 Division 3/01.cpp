/*Editor: Omkar Ugale
Time : . 20th feb 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int a,b,c;
      cin>>a>>b>>c;
      cout<<max(b,(a+c))<<endl;
      
   }
   return 0;
}