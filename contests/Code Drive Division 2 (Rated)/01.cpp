#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n < 3)
            cout << 0 << endl;
        else
        {
            ll ans = ((n - 2) * 10 * (n - 2) * (n - 2));
            cout << ans << endl;
        }
    }
    return 0;
}