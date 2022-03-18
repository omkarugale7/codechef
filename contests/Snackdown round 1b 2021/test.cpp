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
        int pre[1000];
        pre[1] = 1;
        pre[2] = 2;
        for (int i = 3; i <= 1000; i++)
        {
            pre[i] = pre[i - 1] + i - 1;
        }
        int pos = lower_bound(pre[0], pre[1000], n + 1) - pre[0] - 1;
        cout << 2 * pos << endl;
    }

    return 0;