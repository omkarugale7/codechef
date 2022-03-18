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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int count = 0, countless = 0, countmore = 0;
        for (int i = 0; i < n; i++)
        {
            countless = 0;
            countmore = 0;
            for (int j = 0; j < n; j++)
            {
                if (arr[j] <= arr[i])
                {
                    countless++;
                }
                if (arr[j] > arr[i])
                {
                    countmore++;
                }
            }
            if (countless > countmore)
            {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}