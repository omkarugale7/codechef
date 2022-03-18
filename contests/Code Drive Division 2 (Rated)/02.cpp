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
        int arr[] = {0, 0, 10, 60, 270, 1080, 4050, 14580, 51030, 174960};
        cout << arr[n - 1] << endl;
    }
    return 0;
}