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
      int n;
      cin >> n;
      float arr[n];
      for (int i = 0; i < n; i++)
         cin >> arr[i];
      float a = 0 , b = 0 , meana = 0 , meanb = 0;
      sort(arr,arr+n);
      for (int i = 0; i < n; i++)
      {
         if (i%2)
         {
            a++;
            meana+=arr[i];
         }
         else
         {
            b++;
            meanb+=arr[i];
         }

         
      }
   //     std::cout << std::fixed;
   //  std::cout << std::setprecision(6);
      cout<< fixed << setprecision(6)<< (meana/a + meanb/b)<<endl;
      
   }
   return 0;
}