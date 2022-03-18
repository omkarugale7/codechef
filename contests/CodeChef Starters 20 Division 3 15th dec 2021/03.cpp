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
        set<int> s;
        int arr[n];
        bool same = true;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            s.insert(arr[i]);
        }
        int q = sizeof(arr) / sizeof(arr[0]);
        int m = *max_element(arr, arr + q);
        if (s.size() == 1)
            cout << 0 << endl;

        else if (arr[n - 1] == m)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }

    return 0;
}