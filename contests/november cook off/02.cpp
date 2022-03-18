#include <iostream>
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
        int arr[n];
        int minus_one = 0, plus_one = 0, sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 3 == 1)
                minus_one++;
            if (arr[i] % 3 == 2)
                plus_one++;
            sum += arr[i];
        }
        if (sum % 3 != 0)
            cout << -1 << endl;
        else if (minus_one == plus_one)
            cout << minus_one << endl;
        else
            cout << (minus_one + plus_one) / 2 << endl;
    }

    return 0;
}