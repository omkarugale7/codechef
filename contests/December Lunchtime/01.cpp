#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
      long long   int n;
        cin >> n;
        vector<long long int> a;
        for (int i = 0; i < n; i++)
        {
           long long int k;
            cin >> k;
            a.push_back(k);
        }
        sort(a.begin(), a.end());
        long long ans = (a[n - 1] - a[0]) * a[n - 2];
        cout << ans << endl;
    }

    return 0;
}