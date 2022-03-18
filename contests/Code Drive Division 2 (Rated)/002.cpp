#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int count = 0;
        int xo = 0;
        for (int i = k - 1; i < n; i++)
        {
            xo = xo ^ (s[i] - '0');
        }
        if (xo)
            count++;
        int r = n - 1, o = k - 2;
        while (o >= 0)
        {
            xo = xo ^ (s[r] - '0');
            xo = xo ^ (s[o] - '0');
            if (xo)
                count++;
                r--;
                o--;
        }
        cout << count << endl;
    }
    return 0;
}