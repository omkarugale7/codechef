#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int R[5];
        for (int i = 0; i < 5; i++)
        {
            cin >> R[i];
        }
        int d = 0, e = 0, in = 0;
        for (int i = 0; i < 5; i++)
        {
            if (R[i] == 0)
            {
                d++;
            }
            else if (R[i] == 1)
            {
                in++;
            }
            else if (R[i] == 2)
            {
                e++;
            }
        }
        if ((in == e))
        {
            cout << "DRAW" << endl;
        }
        else if (in > e)
        {
            cout << "INDIA" << endl;
        }
        else if (e > in)
        {
            cout << "ENGLAND" << endl;
        }
    }

    return 0;
}