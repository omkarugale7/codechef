#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int AddNumbers(int n)
{
    string a = "1";
    string b = to_string(n);
    string c = a + b;
    return stoi(c);
}
bool IsSquare(int n)
{
    int a = AddNumbers(n);
    int b = sqrt(a);
    return (a == b * b);
}
int main()
{
    // cout << IsSquare(225) << endl;
    int n;
    cin>>n;
    for (int i = 1; i < n; i++)
    {
        int a = sqrt(i);
        if (a * a == i)
        {
            if (IsSquare(i) == true)
            {
                cout << 1 << " " << sqrt(i) << endl;
                cout << 1 << i << endl;
            }
            else
                continue;
        }
    }

    return 0;
}