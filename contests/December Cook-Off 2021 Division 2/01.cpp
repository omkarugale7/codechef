#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        set<int> s;
        for (int i = 1; i <= pow((n - 1), 0.5); i++)
        {
            if ((n - 1) % i == 0)
            {
                cout << i << " ";
                s.insert(i);
            }
        }
        cout << endl;
        cout << 2 * (s.size()) << endl;
    }

    return 0;
}