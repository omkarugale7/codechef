#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        vector <int> arr;
        for (int i = 0; i < n; i++)
        {
           int k ;
           cin>>k;
           arr.push_back(k);
        }
        if (n > 2)
        {
            int x = arr[0];
            for (int i = 1; i < n - 1; i++)
            {
                x = x & arr[i];
            }
            cout << (x ^ arr[n - 1]) << endl;
        }
        else
            cout << (arr[0] & arr[1]) << endl;
    }
    return 0;
}

 