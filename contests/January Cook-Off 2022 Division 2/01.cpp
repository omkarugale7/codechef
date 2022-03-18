   /*Editor: Omkar Ugale
   Time : .  23rd jan 2022 */
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
         int k = 97;
         while (n--)
         {
            cout << (char)k  ;
            if (k == 122)
               k = 97;
               k++;
         }
         cout<<endl;
      }
      return 0;
   }