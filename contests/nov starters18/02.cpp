#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0;
        cin >> n;
        string a, b;
        cin >> a >> b;
        bool chk = false;
        for (int i = n - 1; i >= 0; i++)
        {
            if (a[i] < b[i])
            {
                sum++;
                chk = true;
            }
            if (a[i] > b[i])
                chk = false;
            if (a[i] == b[i] && chk == true)
                sum++;
        }
        cout << sum << endl;
    }

    return 0;
}