#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, m, ans = 0, i = 1;
        cin >> n >> m;
        long long int div = m + 1;
        long long int zeros = n - m;
        while (zeros > 0)
        {
            int temp = min(zeros,div);
            zeros -= temp;
            ans += i * temp;
            i++;
        }
        cout << ans << endl;
    }

    return 0;
}