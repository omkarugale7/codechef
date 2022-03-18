#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int mex(int arr[], int n)
{

    int i = 0;
    int mex = INT_MAX, k = 0;
    sort(arr, arr + n);
    for (i = 0; i < n; i++)
    {

        if (arr[i] == -1)
        {
            k++;
            // cout<<k;
        }
        cout << arr[i] << " ";
        if ((arr[i] + k - 1) != i && arr[i] != -1 && k != 0) // (arr[i] + k - 1) != i this condition tells that if element is
        // npt same as the index
        {
            mex = i - 1;
            break;
        }
        else if (k == 0 && arr[i] != i)
        {
            mex = i;
            break;
        }
    }
    if (i == n)
    {
        return n ;
    }

    else
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
            cout <<mexarr[i] ;
            cout<<endl;
        }
        // for (int i = 0; i < b; i++)
        // {
        //     cout << mexarr[i] << endl;
        // }
    }

    return 0;
}