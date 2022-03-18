/* Code Editor: Omkar Ugale
Time : .  jan 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        if (n == 1)
        {
            if (m % 2 == 0)
                cout << "Even" << endl;
            else
                cout << "Odd" << endl;
        }
        else
            cout << "Impossible" << endl;
    }
    return 0;
}