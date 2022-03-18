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
        int ans[n];
        ans[0] = 1;
        for (int i = 1; i < n; i++)
            ans[i] = 2 * ans[i - 1] + 1;
        for (int i = 0; i < n; i++)
            cout << ans[i] << " ";
        cout << endl;
    }

    return 0;
}