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
        if (n % 4 == 0)
        {
            cout << "yes" << endl;
            int a[n / 2], b[n / 2], ak = 0, bk = 0;
            for (int i = 0; i < n; i++)
            {
                if (i < n / 4)
                {
                    a[ak++] = i + 1;
                }
                else if (i >= n / 4 && i < (3 * n) / 4)
                {

                    b[bk++] = i + 1;
                }
                else
                {
                    a[ak++] = i + 1;
                }
            }
            for (int i = 0; i < n / 2; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
            for (int i = 0; i < n / 2; i++)
            {
                cout << b[i] << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }

    return 0;
}