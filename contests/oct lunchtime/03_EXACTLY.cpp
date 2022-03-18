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
        cout << "1 ";
        for (int i = 0; i < n; i++)
        {
            cout << (1ll << i) << " ";
        }

        cout << endl;
    }

    return 0;
}
                       //            (1 << 3)
// #include <iostream>

// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         long long int n;
//         cin >> n;
//         long long int num = (1 << n)-1;
//         long long int temp = 1;
//         cout << temp << " ";
//         while (temp < num)
//         {
//             cout << temp << " ";
//             temp *= 2;
//         }
//         cout << endl;
//     }

//     return 0;
// }