#include <iostream>
#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long int
int decimalToBinary(int N)
{
    ull B_Number = 0;
    int cnt = 0;
    while (N != 0)
    {
        int rem = N % 2;
        ull c = pow(10, cnt);
        B_Number += rem * c;
        N /= 2;
        cnt++;
    }

    return B_Number;
}
int palindrome(int k)
{
    int n = decimalToBinary(k);
    int r, sum = 0, temp;
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = (sum * 10) + r;
        n = n / 10;
    }
    return (sum == temp);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 1)
        {
            cout << "2" << endl;
            cout << "0 1" << endl;
        }
        else
        {
            vector<int> palin;
            for (int i = 0; i < n; i++)
            {
                if (palindrome(i))
                    palin.push_back(i);
            }
            int temp = 0;
            vector<int> ans;
            while (n > 0)
            {
                std::vector<int>::iterator low;
                low = std::lower_bound(palin.begin(), palin.end(), n);
                int z = (low - palin.begin());
                int k = palin[z - 1];
                if (k == 0)
                    break;
                ans.push_back(k);
                n -= k;
                if (n == 1)
                {
                    ans.push_back(1);
                    break;
                }
            }
            cout << ans.size() << endl;
            for (int i = 0; i < ans.size(); i++)
            {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}