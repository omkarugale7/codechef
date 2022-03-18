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
        string s;
        cin >> s;
        int k = s[0], count = 1;
        for (int i = 0; i < s.length(); i++)
        {
            if (k != s[i])
            {
                count++;
                k = s[i];
            }
        }
        if (count == 1)
        {
            cout << "SAHID" << endl;
        }
        else if (count == 2)
        {
            cout << "RAMADHIR" << endl;
        }
        else
        {
            int ans = ((count - 2) / 2) + 2;
            if (ans % 2 == 0)
            {
                cout << "RAMADHIR" << endl;
            }
            else
            {
                cout << "SAHID" << endl;
            }
        }
    }

    return 0;
}