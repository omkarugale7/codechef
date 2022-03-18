/* Code Editor: Omkar Ugale
Time : .  jan 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int josephus(ll n, ll k)
{
    if (n == 1)
        return 1;
    else
        return (josephus(n - 1, k)) % n;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll m, x;
        cin >> m >> x;
        for (int i = 1; i <= x; i++)
        {
            cout << josephus(i, m - 1) << " ";
        }
        cout << endl;
    }
    return 0;
}