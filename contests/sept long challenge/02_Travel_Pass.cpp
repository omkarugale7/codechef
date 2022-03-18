#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, a, b;
        string s;
        cin >> n >> a >> b;
        cin >> s;
        int k, ans = 0;

        for (int i = 0; i < n; i++)
        {
            k =  (s[i]);
            if (k == '0')
            {
                ans += a;
            }
            else if (k == '1')
            {
                ans += b;
            }
        }
        cout << ans << endl;
    }

    return 0;
}