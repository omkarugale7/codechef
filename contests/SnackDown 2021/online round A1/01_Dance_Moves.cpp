#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int rem = y - x;
        if (rem < 0)
        {
            rem = rem + 2 * rem;
        }
        if (rem % 2 == 0)
        {
            cout << rem / 2 << endl;
        }
        else
        {
            cout << (rem / 2) + 2 << endl;
        }
    }

    return 0;
}