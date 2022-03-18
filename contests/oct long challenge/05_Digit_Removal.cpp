#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, d;
        cin >> n >> d;
        int num = n, digit = 0, ans = 0;
        while (num > 0)
        {
            int c = num % 10;
            num /= 10;
            digit++;
            int k = pow(10, digit);
            if (c == d)
            {
                num = num * k + (c + 1) * (k / 10);
                ans = num - n;
                digit = 0;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
