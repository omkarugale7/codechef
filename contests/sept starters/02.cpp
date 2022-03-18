#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, p, x, y, count = 0;
        cin >> n >> p >> x >> y;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < p; i++)
        {
            if (arr[i] == 1)
            {
                count += y;
            }
            else if (arr[i] == 0)
            {
                count += x;
            }
        }
        cout << count << endl;
    }

    return 0;
}