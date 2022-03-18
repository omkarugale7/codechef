#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b, c, d, ans;
        cin >> a >> b >> c >> d;
        if (a + b + c <= d)
        {
            cout << "1" << endl;
        }
        else if (a + b <= d || a + c <= d || b + c <= d)
        {
            cout << "2" << endl;
        }
        else
        {
            cout << "3" << endl;
        }
    }

    return 0;
}
// #include <iostream>

// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     for (int i = 0; i < t; i++)
//     {
//         int a, b, c, d, ans;
//         cin >> a >> b >> c >> d;
//         int k = a + b + c;
//         if (k % d == 0)
//         {
//             ans = k / d;
//         }
//         else
//         {
//             ans = (k / d) + 1;
//         }
//         cout << ans << endl;
//     }

//     return 0;
// }