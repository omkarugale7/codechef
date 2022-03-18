 
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
ll gcd(ll a, ll b)
{
   if (b == 0)
      return a;
   return gcd(b, a % b);
}

// Function to return LCM of two numbers
// Function to return LCM of two numbers
// Function to return LCM of two numbers
ll lcm(int a, int b)
{
   return (a / gcd(a, b)) * b;
}
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      ll b, c;
      cin >> b >> c;
      if (c % b == 0)
         cout << c / b << endl;
      else
         cout << lcm(c, b)/b << endl;
   }
   return 0;
}