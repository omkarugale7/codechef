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
        ll n, sum = 0, minno = INT_MAX, index = 0, maxno = -1;
        cin >> n;
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
            minno = min(minno, arr[i]);
            if (minno == arr[i])
                index = i;
        }
        sort(arr, arr + n);
        int totalsum = 1;
        while (totalsum < sum)
            totalsum *= 2;
        if ((sum & (sum - 1)) == 0)
            cout << 0 << endl;
        else
        {
            ll x = totalsum - sum;
            cout << 1 << endl;
            cout << 1 << " " << (x / minno)+1 << endl;
            cout << index + 1 << endl;
        }
    }
    return 0;
}