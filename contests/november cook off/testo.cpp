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
        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int sum = 0;
        int rem1 = 0, rem2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 3 == 1)
                rem1++;
            if (arr[i] % 3 == 2)
                rem2++;
            sum += arr[i];
        }

        if (rem1 == rem2)
            cout << rem1 << endl;
        else
        {
            int diff = abs(rem1 - rem2);
            if (diff % 3 == 0)
                cout << min(rem1, rem2) + (abs(rem1 - rem2) / 3) * 2 << endl;
            else
                cout << -1 << endl;
        }
        return 0;
    }
}