#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        t--;
        int n, k, count = 0, sum = 0;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        bool z = false;
        for (int i = n - 1; i > 0; i--)
        {
            count++;
            sum = sum + a[i];
            if (sum >= k)
            {
                z = true;
                break;
            }
        }
        if (z == true)
        {
            cout << count << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}