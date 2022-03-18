//  /*Editor: Omkar Ugale
// // Time : . 23th feb 2022 */
// /*Editor: Omkar Ugale
// // Time : . 23th feb 2022 */
// /*Editor: Omkar Ugale
// // Time : . 23th feb 2022 */
// /*Editor: Omkar Ugale
// // Time : . 23th feb 2022 */
// #include <bits/stdc++.h>

// using namespace std;
// typedef long long int ll;
// int main()
// {
//    int t;
//    cin >> t;
//    while (t--)
//    {
//       int n;
//       cin >> n;
//       string s;
//       cin >> s;
//       char temp = s[0];
//       int ans = 1;
//       for (int i = 1; i < n; i++)
//       {
//          if (s[i]!=temp)
//          {
//              ans++;
//              temp = s[i];
//          }
         
//       }
//       cout<<ans<<endl;
      
//    }
//    return 0;
// }
// // /*Editor: Omkar Ugale
// // Time : . 23th feb 2022 */
// // #include <bits/stdc++.h>

// // using namespace std;
// // typedef long long int ll;
// // int main()
// // {
// //    int t;
// //    cin >> t;
// //    while (t--)
// //    {
// //       int n;
// //       cin >> n;
// //       string s;
// //       cin >> s;
// //       set<string> see;
// //       see.insert(s.substr(0,n-1));
// //       for (int i = 0; i < n-1; i++)
// //       {
// //          string temp = s;
// //          temp.erase(i,1);
// //          see.insert(temp);
// //       }
// //       cout<<see.size()<<endl;
// //    }
// //    return 0;
// // }

// // #include <bits/stdc++.h>

// // using namespace std;
// // typedef long long int ll;
// // int main()
// // {
// //    int t;
// //    cin >> t;
// //    while (t--)
// //    {
// //       int n;
// //       cin >> n;
// //       string s;
// //       cin >> s;
// //       char temp = s[0];
// //       int ans = 1;
// //       for (int i = 1; i < n; i++)
// //       {
// //          if (s[i]!=temp)
// //          {
// //              ans++;
// //              temp = s[i];
// //          }
         
// //       }
// //       cout<<ans<<endl;
      
// //    }
// //    return 0;
// // }
// // // /*Editor: Omkar Ugale
// // // Time : . 23th feb 2022 */
// // // #include <bits/stdc++.h>

// // // using namespace std;
// // // typedef long long int ll;
// // // int main()
// // // {
// // //    int t;
// // //    cin >> t;
// // //    while (t--)
// // //    {
// // //       int n;
// // //       cin >> n;
// // //       string s;
// // //       cin >> s;
// // //       set<string> see;
// // //       see.insert(s.substr(0,n-1));
// // //       for (int i = 0; i < n-1; i++)
// // //       {
// // //          string temp = s;
// // //          temp.erase(i,1);
// // //          see.insert(temp);
// // //       }
// // //       cout<<see.size()<<endl;
// // //    }
// // //    return 0;
// // // }
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
long long gcd(long long int a, long long int b)
{
   if (b == 0)
      return a;
   return gcd(b, a % b);
}
 
long long lcm(int a, int b)
{
   return (a / gcd(a, b)) * b;
}
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int b, c;
      cin >> b >> c;
      if (c % b == 0)
         cout << c / b << endl;
      else
         cout << lcm(c, b)/b << endl;
   }
   return 0;
}