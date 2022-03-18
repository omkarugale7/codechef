#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, a, b, k;
        cin >> x >> y >> a >> b >> k;
        int petrol = x + a * k;
        int diesel = y + b * k;
        if (petrol > diesel)
        {
            cout << "PETROL" << endl;
        }
        else if (petrol < diesel)
        {
            cout << "DIESEL" << endl;
        }
        else
        {
            cout << "SAME PRICE" << endl;
        }
    }

    return 0;
}