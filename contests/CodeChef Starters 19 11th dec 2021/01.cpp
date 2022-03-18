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
        if (n == 2)
            cout << 2 << " " << 1 << endl;

        else
        {
            cout << 1 << " ";
            for (int i = 2; i <=n - 1; i++)
                cout << i + 1 << " ";
            cout << 2 << endl;
        }
    }

    return 0;
}