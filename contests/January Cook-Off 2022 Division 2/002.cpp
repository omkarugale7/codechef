#include <bits/stdc++.h>
using namespace std;

 
#define ll long long

int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int n;
      cin >> n;
      vector<int> arr(n);
      for (int i = 0; i < n; i++)
         cin >> arr[i];
      sort(arr.begin(), arr.end());
      int sum = 0;
      for (int i = 0; i < n-1; i++)
      sum += arr[i];
      double ans = double(sum) / (n - 1);
      ans += arr[n-1];
      cout << setprecision(12) << fixed;
      cout << ans << '\n';
   }
   return 0;
}