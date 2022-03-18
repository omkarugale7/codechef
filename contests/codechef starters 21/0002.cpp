#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long int ll;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            v.push_back(k);
        }
        vector<long long int> bit(64, 0);
        for (long long i = 0; i < n; i++)
        {
            long long bitr = v[i];
            long long d = 0;
            while (bitr)
            {
                if (bitr % 2 == 1)
                {
                    bit[d]++;
                }
                bitr = bitr / 2;
                d++;
            }
        }
        long long ans = 0;
        for (long long i = 0; i < 64; i++)
        {
            if (bit[i] > 1)
                ans += pow(2, i);
        }
        cout << ans << endl;
    }
    return 0;
}
