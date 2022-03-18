#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long int x;
        cin >> x;
        if (x == 0)
        {
            cout << "1" << endl;
        }
        else if (x == 1)
        {
            cout << "2" << endl;
        }

        else
        {
            long long int a = 1;
            while (a < x)
            {
                a *= 2;
            }
            if (a == x)
            {
                a /= 2;
                a -= 1;
            }

            else
            {
                a /= 2;
                a -= 1;
            }
            // a is the max value of bitwise or of elements in array.
            cout << a + 1 << endl;
        }
    }

    return 0;
}