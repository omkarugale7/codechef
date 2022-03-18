#include <iostream>
#include <bits/stdc++.h>

using namespace std;
long long gcd(long long int a, long long int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int a[n];
        a[0] = b[0];
         
        for (int i = 1; i < n; i++)
        {
            if (b[i - 1] % b[i] == 0)
            {
                a[i] = b[i - 1] - b[i];
            }
            else
            {
                cout << -1 << endl;
                return -1;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}