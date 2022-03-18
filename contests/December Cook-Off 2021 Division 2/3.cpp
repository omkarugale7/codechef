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
        int start = 0, last = n - 1, count = 0;

        while (start == last)
        {
            cout<<s[start]<<" " << s[last]<<endl;
            if (s[start] == s[last])
            {
                start++;
                last--;
                count++;
            }
            else
                start++;
        }
        cout<<count<<" ";
        if (count % 2 == 0)
            cout << "JJ" << endl;
        else
            cout << "UTTU" << endl;
    }

    return 0;
}