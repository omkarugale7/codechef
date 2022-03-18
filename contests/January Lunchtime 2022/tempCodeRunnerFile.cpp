/*Editor: Omkar Ugale
Time : .  28th jan 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int n, k;
      cin >> n >> k;
      string s;
      cin >> s;
      int arr[n];
      int ans = 0, sum = 0;
      for (int i = 0; i < n; i++)
      {
         arr[i] = 10 - (s[i] - '0');   
         if (arr[i]==10)
         {
           ans++;
         //   cout<<"q"<<endl;
           continue;
         }
            
         sum += arr[i];
         if (sum < k)
            ans++;
         else if (sum == k)
         {
            ans++;
         }
         else
            break;
      }
      cout << ans << endl;
   }
   return 0;
}