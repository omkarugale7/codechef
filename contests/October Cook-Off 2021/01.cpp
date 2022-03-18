#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, l, x;
        cin >> n >> l >> x;
        int r = n - l;
        int ans = (min(l, r)) * x;
        cout << ans << endl;
    }

    return 0;
}