#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> arr(n);
        long long cnt = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            cnt += arr[i];
        }
        cout << (cnt / n) << endl;
    }

    return 0;
}