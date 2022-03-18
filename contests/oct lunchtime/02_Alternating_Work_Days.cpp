#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, p, q;
        cin >> a >> b >> p >> q;
        int alice = p / a;
        int bob = q / b;
        int diff = max(alice, bob) - min(alice, bob);
        if ((p % a == 0) && (q % b == 0) && (diff <= 1))
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }

    return 0;
}