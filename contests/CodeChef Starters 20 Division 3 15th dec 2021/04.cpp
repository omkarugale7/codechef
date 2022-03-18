#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        unsigned long long int n, m = 1000000007, k = 1;
        cin >> n;
        if (n == 1)
            cout << 1 << endl;
        else if (n == 2)
            cout << 2 << endl;
        else
        {
            while (k < n)
                k *= 2;
            if (k == n)
                cout << (k * 2) % m << endl;
            else
                cout << k % m << endl;
        }
    }
    return 0;
}