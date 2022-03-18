/*Editor: Omkar Ugale
Time : .  19th jan 2022 */
#include <bits/stdc++.h>
#define ll long long
using namespace std;

signed main()
{
    vector<ll> b;
    for (int i = 0; i < 7; i++)
    {
        for (int j = i + 1; j < 8; j++)
        {
            for (int k = j + 1; k < 9; k++)
            {
                for (int l = k + 1; l < 10; l++)
                {
                    ll val = (1 << l) + (1 << k) + (1 << j) + (1 << i);
                    cout << (1 << l) <<" "<< (1 << k) <<" "<< (1 << j) <<" "<< (1 << i) << endl;
                    cout << val << endl;

                    b.push_back(val);
                }
                if (b.size() == 1000)
                {
                    break;
                }
            }
            if (b.size() == 1000)
            {
                break;
            }
        }
        if (b.size() == 1000)
        {
            break;
        }
    }

    // int t;
    // cin >> t;
    // while (t--)
    // {

    //     ll n;
    //     cin >> n;

    //     for (int i = 0; i < n; i++)
    //     {
    //         cout << b[i] << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}