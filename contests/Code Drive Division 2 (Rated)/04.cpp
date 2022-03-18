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
        vector<ll> arr;
       ll count = 0;
        for (int i = 0; i < n; i++)
        {
            ll k;
            cin >> k;
            arr.push_back(k);
            count += k;
        }
        cout << count / n << endl;
    }
    return 0;
}