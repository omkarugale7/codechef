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
        int arr[n], brr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int maxe = 0, mine = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            maxe = max(maxe, arr[i]);
        }
    }

    return 0;
}