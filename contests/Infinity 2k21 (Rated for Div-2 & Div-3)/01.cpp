#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans = 0, cnt = 0;
        cin >> n;
        string a, b;
        cin >> a >> b;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
                ans++;
            if (a[i] == '?' && b[i] == '?')
                cnt = 1;
        }
        cout << ans << " " << cnt << endl;
    }

    return 0;
}