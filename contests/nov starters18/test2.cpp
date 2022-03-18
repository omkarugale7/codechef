#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            int equalOrNot = a.compare(b);
            if (equalOrNot < 0)
                ans++;
            a.erase(0, 1);
            b.erase(0, 1);
        }
        cout << ans << endl;
    }
    return 0;
}