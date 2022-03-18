#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int num[n];
        for (int i = 0; i < n; i++)
        {
            cin >> num[i];
        }
        int even = 0, odd = 0, op, ep;
        if (n % 2 == 0)
        {
            op = n / 2;
        }
        else
        {
            op = n / 2 + 1;
        }

        ep = n / 2;
        for (int i = 0; i < n; i++)
        {
            if (num[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        // cout << even << " " << odd << " " << op << " " << ep << " " << endl;
        int ans = min(even, op) + min(odd, ep);
        cout << ans << endl;
    }

    return 0;
}