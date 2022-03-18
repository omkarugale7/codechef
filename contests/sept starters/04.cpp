#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int p, a, b, c, x, y;
        cin >> p >> a >> b >> c >> x >> y;
        int bf = b + a * x;
        int cf = c + a * y;
        int count = min(bf, cf);
        if (bf < cf)
        {
            cout << p / bf << endl;
        }
        else if (bf == cf)
        {
            cout << p / bf << endl;
        }
        else
        {
            cout << p / cf << endl;
        }
    }

    return 0;
}