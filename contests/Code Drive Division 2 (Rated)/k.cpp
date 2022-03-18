#include <iostream>
using namespace std;
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int n;
      cin >> n;
      if (n >= 10)
      {
         cout << "-1" << endl;
      }
      else
      {
         cout << "Thanks for helping chef!"<<endl;
      }
   }
   return 0;
}