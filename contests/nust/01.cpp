#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, min_no = INT_MAX, max_no = INT_MIN;
        cin >> n;
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            arr.push_back(k);
            min_no = min(arr[i], min_no);
            max_no = max(arr[i], max_no);
        }
        cout << max_no - min_no << endl;
    }

    return 0;
}