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
        int num[n];
        for (int i = 0; i < n; i++)
        {
            cin >> num[i];
        }
        cout << (num[0] & num[1]) << " ";
        for (int i = 1; i < n - 1; i++)
        {
            int next = (num[i] & num[i + 1]);
            int prev = (num[i] & num[i - 1]);
            cout << max(prev, next) << " ";
        }

        cout << (num[n - 1] & num[n - 2]) << endl;
    }

    return 0;
}