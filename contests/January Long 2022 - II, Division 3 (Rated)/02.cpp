/* Code Editor: Omkar Ugale
Time : .  jan 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        int sum = 0;
        int ans = 0;
        bool gotsum = false;
        for (int i = n - 1; i >= 0; i--)
        {
            sum += arr[i];
            ans++;
            if (sum >= m)
            {
                gotsum = true;
                break;
            }
        }
        if (gotsum)
            cout << ans << endl;
        else
            cout << "-1" << endl;
    }
    return 0;
}