#include <iostream>
#include <bits/stdc++.h>
using namespace std;
unsigned long long has[100005];
int main()
{
    has[0] = 1;
    for (int i = 1; i <= 100001; i++)
    {
        has[i] = (has[i - 1] * 2) % u;
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        unordered_set<int> s;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            s.insert(k);
        }
        unsigned long long int ans = 0;
        ans += n % 1000000007;
        ans += has[s.size()] - 1 - s.size() % 1000000007;
        ans = ans % 1000000007;
        cout << ans << endl;
    }

    return 0;
}
