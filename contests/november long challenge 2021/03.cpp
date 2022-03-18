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
        int num[n], count = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> num[i];
            if (num[i] % 2 != 0)
            {
                count++;
            }
        }
        if (count <= 1)
        {
            cout << "0" << endl;
        }
        else
        {
            cout << count / 2 << endl;
        }
    }

    return 0;
}