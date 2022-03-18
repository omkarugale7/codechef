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
      int n;
      cin >> n;
      int arr[2 * n];
      int ods = 0, evns = 0;
      for (int i = 0; i < 2 * n; i++)
      {
         cin >> arr[i];
         if (arr[i] % 2)
            ods++;
         else
            evns++;
      }
      if (ods%2==0&&evns%2==0)
       cout<<"YES"<<endl;
       else
       cout<<"NO"<<endl;
      
   }
   return 0;
}