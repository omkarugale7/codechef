#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        long long int a, b, i;
        cin >> a >> b;
        for (i = 0; i <= 12; i++)
        {
            long long int z = (pow(b, i));
            if (z % a == 0)
            {
                cout << "YES" << endl;
                break;
            }
        }
        if (i == 13)
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}