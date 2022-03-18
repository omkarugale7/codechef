/*Editor: Omkar Ugale
Time : .  19th jan 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll k;
        cin >> k;
        if (k == 1)
            cout << 1 << endl;
        else
        {
            if ((k & (k - 1)) == 0)
            {
                ll i = 1, j = 0;
                while (i < k)
                {
                    i *= 2;
                    j++;
                }
                cout << j << endl;
            }
            else
                cout << 0 << endl;
        }
    }
    return 0;
}