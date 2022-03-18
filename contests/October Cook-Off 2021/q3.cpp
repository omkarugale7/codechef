#include <iostream>

using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += i;
        }

        cout << ans << endl;
    }

    return 0;
}