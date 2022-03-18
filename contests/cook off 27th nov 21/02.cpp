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
        int arr[2 * n];
        set<int> s;
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> arr[i];
            s.insert(arr[i]);
        }
        int num[n];
        int i = 0;
        set<int>::iterator itr;
        cout << "\nThe set s1 is : \n";
        for (itr = s.begin(); itr != s.end(); itr++)
        {
            num[i++] = *itr;
        }
        for (int i = 0; i < n; i++)
        {
            cout << num[i] << " ";
        }
    }

    return 0;
}