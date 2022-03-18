#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T = 1;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> b, a;
        int x;
        bool c = true;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            b.push_back(x);
            if (i > 0 && b[i - 1] % b[i] != 0)
            {
                c = false;
            }
        }
        if (c)
        {
            for (int i = 0; i < n; i++)
                cout << b[i] << ' ';
            cout << endl;
        }
        else
            cout << "-1\n";
    }

    return 0;
}