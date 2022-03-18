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
        int arr[n], brr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            brr[i] = arr[i];
        }
        map<int, int> m;
        int maxe = INT_MIN, mine = INT_MAX, ans = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            m[arr[i]] = 1;
            m[brr[i]] = (m.find(brr[i])) --;
            if ()
            {
                /* code */
            }

            maxe = max(maxe, arr[i]);
            mine = min(mine, arr[i]);
            if (m.size() == 0)
            {
                ans += maxe - mine;
                maxe = INT_MIN;
                mine = INT_MAX;
            }
            cout << maxe << " " << mine << endl;
        }
        cout << ans << endl;
    }

    return 0;
}