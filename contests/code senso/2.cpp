#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        int power = 0;
        for (int i = 0; i < s.length(); i++)
        {
            int temp = (s[i] - 'a') + 1;
            power += temp * (i + 1);
        }
        cout << power << endl;
    }

    return 0;
}