#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int mex(int arr[], int n)
{

    int i = 0;
    int mex = INT_MAX;
    sort(arr, arr + n);
    int num[n];
    for (int i = 0; i < n; i++)
    {
        num[i] = i;
    }
    int k = 0;
    for (i = 0; i < n; i++)
    {

        if (arr[i] == num[k])
        {
            k++;
        }
        else if (arr[i] == -1)
        {
            continue;
        }
        else if (arr[i] != num[k])
        {
            return arr[i] - 1;
        }
    }
    if (i == n)
    {
        return (arr[n - 1] + 1);
    }
    else
        return 1111;
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
        }
        sort(mexarr, mexarr + b);
        // for (int i = 0; i < b; i++)
        // {
        //    cout<< mexarr[i]  <<" ";
        // }
        // cout<<endl;
        cout << mexarr[k - 1] << endl;
        ;
    }

    return 0;
}