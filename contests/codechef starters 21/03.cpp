#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int primes(int b)
{
    int ans = 0;
    for (int i = 2; i * i <= b; i++)
    {
        if (b % i == 0)
        {
            ans++;
            while ((b % i) == 0)
            {
                b /= i;
            }
        }
    }
    if (b != 1)
    {
        ans++;
    }

    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int primes_till_m, high=0;
        primes_till_m = primes(m);
        for (int i = primes_till_m; i > 0; i--)
        {
            if (n % i == 0)
            {
                high = i;
                break;
            }
        }

        // cout << high << " " << primes_till_m << endl;
        cout << high << endl;
    }

    return 0;
}