/*Editor: Omkar Ugale
Time : .  22nd jan 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int lengthOfLIS(vector<int> &a)
{
   multiset<int> s;
   multiset<int>::iterator it;
   int sizeOfarray = a.size();
   for (int i = 0; i < sizeOfarray; i++)
   {
      s.insert(a[i]);
      it = s.upper_bound(a[i]);
      if (it != s.end())
         s.erase(it);
   }
   return s.size();
}
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int n, m;
      cin >> n >> m;
      vector<int> arr(n);
      for (int i = 0; i < n; i++)
         cin >> arr[i];
      vector<int> brr(m);
      for (int i = 0; i < m; i++)
         cin >> brr[i];
      int a = lengthOfLIS(arr);
      int b = lengthOfLIS(brr);
      cout << a + b << endl;
   }
   return 0;
}