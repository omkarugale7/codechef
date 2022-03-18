#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        string s;
        cin >> s;
        while (b)
        {
            reverse(s.begin(), s.begin() + b);
            b--;
        }
        cout << s << endl;
    }

    return 0;
}