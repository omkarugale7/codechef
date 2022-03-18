#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {

        int n, a, b, c;
        cin >> n >> a >> b >> c;
        b -= min(a, c);
        int ans = min(a, c) + min(b, max(a, c));
        if (ans >= n)
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