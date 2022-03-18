#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, ans = 0;
        cin >> n;
        if (n == 1)
        {
            cout << "1" << endl;
            continue;
        }

        int a = 1;
        while (a < n)
        {
            a *= 2;
        }
        if ((n & (n - 1)) == 0 || (n & (n + 1)) == 0)
        {
            ans = a / 2;
        }
        else
        {

            ans = max((n - (a / 2) + 1), a / 4);
        }
        cout << ans << endl;
    }

    return 0;
}