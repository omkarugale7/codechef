#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll ans = 0, temp = m;
        for (ll i = 2; i * i <= m; i++)
        {
            if ((temp % i) == 0)
            {
                ans++;
                while ((temp % i) > 0)
                {
                    temp /= i;
                }
            }
        }

        if (temp > 1)
        {
            ans++;
        }
        // cout << ans << endl;
        vector<long long> arr;
        for (ll i = 1; i * i <= n; i++)
        {
            if (!(n % i))
            {
                arr.push_back(i);
                if (i != (n / i))
                {
                    arr.push_back(n / i);
                }
            }
        }

        ll val = 0;

        for (auto x : arr)
        {
            if (x <= ans)
            {
                val = x;
            }
        }

        cout << val << endl;
    }

    return 0;
}