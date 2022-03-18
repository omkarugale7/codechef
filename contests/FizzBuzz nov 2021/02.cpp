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
        cin>>n;
        string s;
        cin >> s;
        char chk = s[0];
        int cnt = 1;
        for (int i = 1; i < n; i++)
        {
            if (chk == s[i])
                continue;
            else
                chk = s[i];
            cnt++;
        }
        cout << cnt << " " << cnt / 2 << endl;
    }

    return 0;
}