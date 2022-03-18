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
        cout << count << endl;
        if (k % 3 == 2)
        {

            cout << "RAMADHIR\n";
        }
        else
        {
            cout << "SAHID\n";
        }
    }

    return 0;
}