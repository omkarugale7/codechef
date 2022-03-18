/* Code Editor: Omkar Ugale
Time : .  jan 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int red[3], blue[3], green[3];
        for (int i = 0; i < 3; i++)
            cin >> red[i] >> blue[i] >> green[i];
        int a, b, c, d;
        a = min(red[1], blue[0]);
        b = min(red[2], green[0]);
        c = min(blue[2], green[1]);
        red[0] += (a + b);
        blue[1] += (a + c);
        green[2] += (b + c);
        d = 2 * (n - red[0]);
        cout << (a + b + c + d) << endl;
    }
    return 0;
}