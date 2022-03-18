/* Code Editor: Omkar Ugale
Time : .  jan 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        int ans = 0;
        for (ll i = n; i >= 1; i--)
        {
            if ((i | n) == n)
            {
                // cout << i << " " << m << " " << ans << endl;
                ans += m / i;
                m %= i;
                i = m+1;
            }
            // if (!m)
            //     break;
        }
        if (m)
            cout << -1 << endl;
        else
            cout << ans << endl;
    }
    return 0;
}