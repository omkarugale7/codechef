#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, v;
        cin >> n >> v;
        if (n == 1)
        {
            cout << 0 << " " << 0 << endl;
            continue;
        }
        long long int min = 0, max = 0;
        max = (n * (n - 1)) / 2;
        if (v >= n - 1)
        {
            min = n - 1;
        }
        else
            min = v - 1 + ((n - v) * (n - v + 1)) / 2;
        cout << max << " " << min << endl;
    }

    return 0;
}