#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        bool yes = true;
        for (int i = 2; i <= sqrt(n); i++)
            if (n % i == 0)
                yes = false;
        if (n < 1 || n > 100)
            yes = false;
        if (yes)
            cout << "COOKIES" << endl;
        else
            cout << "HUNGRY" << endl;
    }
    return 0;
}