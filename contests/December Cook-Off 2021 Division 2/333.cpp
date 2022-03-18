#include <iostream>
#include <bits/stdc++.h>

using namespace std;
const N = 2005;
int dp[N][2];
bool answer(int val, int par)
{
    if (val == 0)
        return false;
    if (dp[val][par] != -1)
        return dp[val][par];
    bool ans = false;
    if (val >= 1)
        ans |= !answer(val - 1, !par);
    if (val >= 2)
        ans |= !answer(val - 2, !par);
    return dp[val][par] = ans;
}
void SolveTestCases(int testCase)
{
    int n, cnt = 0;
    string str1;
    cin >> n >> str1;
    for (int i = 0; i < n; i++)
    {
        dp[i][0] = dp[i][1] = -1;
    }
    for (int i = 0; i < n; i++)
    {
        if (str1[i] == str1[i + 1])

            cnt++;
    }

    cout << (answer(cnt, 0) ? "JJ" : "Uttu") << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        SolveTestCases(s);
    }

    return 0;
}