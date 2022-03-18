#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a > 0 && b > 0)
        {
            cout << "Solution" << endl;
        }
        else if (b == 0 && a > 0)
        {
            cout << "Solid" << endl;
        }
        else if (a == 0 && b > 0)
        {
            cout << "Liquid" << endl;
        }
    }

    return 0;
}