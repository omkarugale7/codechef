#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if ((i == j) && (i != n - 1) && (i != n - 3))
                {
                    cout << "Q";
                }
                else
                {
                    cout << ".";
                }
            }
            cout << endl;
        }
    }

    return 0;
}