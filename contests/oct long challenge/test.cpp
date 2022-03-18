#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int mex(int arr[], int n)
{
    int mex = INT_MAX, k = 0;

    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {

        if (arr[i] == -1)
        {
            k++;
            // cout<<k;
        }
        cout << arr[i] << " ";
        if ((arr[i] + k - 1) != i && arr[i] != -1)
        {
            mex = i - 1;
        }
    }

    return mex;
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, k, z = 0;
        cin >> n >> k;
        int b = (n * (n + 1)) / 2;
        char num[n];
        for (int i = 0; i < n; i++)
        {
            cin >> num[i];
        }

        int arr[b][n];
        for (int i = 0; i < b; i++)
        {
            for (int j = 0; j < n; j++)
            {
                arr[i][j] = -1;
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {

                int y = 0;
                for (int k = i; k <= j; k++)
                {
                    arr[z][y++] = num[k] - 48;
                }
                z++;
            }
        }
        int mexarr[b];
        for (int i = 0; i < b; i++)
        {
            mexarr[i] = mex(arr[i], n);
            cout << endl;
        }
        for (int i = 0; i < b; i++)
        {
            cout << mexarr[i] << endl;
        }
    }

    return 0;
}