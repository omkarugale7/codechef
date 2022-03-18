/*Editor: Omkar Ugale
Time : . 9th feb 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int n, a;
      cin >> n >> a;
      vector<int> slot;
      int pc = (n * (n + 1)) / 2;
      int i = n;
      int k = 2;
      while (i < pc)
      {
         slot.push_back(i);
         i += k;
         k++;
      }
      i++;
      slot.push_back(i);
      int z;
      for (i = 0; i < slot.size(); i++)
      {
         if (slot[i] >= a)
         {
            z = slot[i];
            break;
         }
      }
      int diff = slot[i] - slot[i - 1];
      int toh_kitwa = a-slot[i-1];
      for (int i = 0; i < n - diff; i++)
      {
         cout << 1 << " ";
      }
      int p = 2;
      for (int i = n - diff; i < n; i++)
      {
         if (i == n - diff + toh_kitwa)
         {
            cout << 1 << " ";
         }
         else
            cout << p++ << " ";
      }
      cout<<endl;
   }
   return 0;
}