#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int p = (1ll << n);
        long long int num[p];
        for (int i = 0; i < p; i++)
        {
            cin >> num[i];
        }
        sort(num, num + p);
        if ((num[p - 1] - num[0]) <= 1)
        {
            cout << "yes" << endl;
        }
        else

        {
            cout << "no" << endl;
        }
    }

    return 0;
}