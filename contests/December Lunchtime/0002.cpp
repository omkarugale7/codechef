#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        long long int n;
        cin >> n;
        vector<long long int> a(n), b(n);
        for (long long int i = 0; i < n; i++)
        {
            cin >> a[i], b[i] = a[i];
        }
        sort(b.begin(), b.end());
        long long int s = n - 1;
        long long int ans = 0;
        while (s > 0)
        {
            if (a[s] != b[s])
            {
                long long int maxe = b[s], mine = a[s];
                long long int i = s;
                while (i > 0)
                {
                    if (a[i] != b[s])
                        i--;
                    else
                        break;
                    mine = min(a[i], mine);
                }
                long long int pos = lower_bound(b.begin(), b.end(), mine) - b.begin();
                for (long long int j = pos; j < i; j++)
                    mine = min(mine, a[j]);
                while (b[pos] != mine)
                {
                    pos = lower_bound(b.begin(), b.end(), mine) - b.begin();
                    for (long long int j = pos; j < i; j++)
                        mine = min(mine, a[j]);
                }
                ans += (maxe - mine);
                s = pos - 1;
            }
            else
                s -= 1;
        }
        cout << ans << endl;
    }

    return 0;
}