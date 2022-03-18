/*Editor: Omkar Ugale
Time : .  19th jan 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k = 1;
        cin >> n;
        int arr[n];
        if (n == 2)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            int m = n ;
            if (n % 2 == 0)
            {
                arr[0] = n / 2;
                for (int i = 1; i < n / 2; i++)
                {
                    arr[i] = i;
                }
                for (int i = n / 2 ; i < n; i++)
                {
                    arr[i] = m--;
                }
            }
            else
            {
                int m = n;
                for (int i = 1; i <= n / 2; i++)
                {
                    arr[i - 1] = i;
                }
                for (int i = n / 2 + 1; i <= n; i++)
                {
                    arr[i - 1] = m--;
                }
            }
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }

            cout << endl;
        }
    }
    return 0;
}