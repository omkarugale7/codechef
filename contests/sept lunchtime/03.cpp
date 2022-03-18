
#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long int l, r, count = 0;
        cin >> l >> r;
        long long int a = l % 3;
        l = l / 3;
        r = r / 3;
        if (a == 0)
        {
            long long int b = r - l;
            cout << b+1 << endl;
        }

        else
        {
            long long int b = r - l;
            cout << b  << endl;
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
//         long long int l, r, ans = 0;
//         cin >> l >> r;
//         long long int c = r - l;
//         if ( l % 3 == 0)
//         {
//             ans = 1 + (c / 3);
//         }
//         else
//         {
//             ans = (c / 3);
//         }

//         cout << ans << endl;
//     }

//     return 0;
// }