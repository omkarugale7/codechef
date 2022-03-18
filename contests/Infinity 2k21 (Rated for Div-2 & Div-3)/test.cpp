#include <iostream>
#include <bits/stdc++.h>

using namespace std;
bool IsVowel(char c)
{
    if (c == 'a' || c == 'e' || c == 'e' || c == 'o' || c == 'u')
        return true;
    else
        return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        int chk = 0, count = 0, count_v = 0, count_c = 0;
        for (int i = 0; i < n; i++)
        {
            if (((IsVowel(a[i])) && b[i] == '?') || ((IsVowel(b[i])) && a[i] == '?'))
                count_v++;
            else if ((!(IsVowel(a[i])) && b[i] == '?') || (!(IsVowel(b[i])) && a[i] == '?'))
                count_c++;
            else if (a[i] == b[i])
                continue;
            else if (IsVowel(a[i]) && IsVowel(b[i]))
                count += 2;
            else if (!IsVowel(a[i]) && !IsVowel(b[i]))
                count += 2;
            else if (!IsVowel(a[i]) && IsVowel(b[i]))
            {
                count += 1;
            }
            else if (IsVowel(a[i]) && !IsVowel(b[i]))
                count += 1;
            cout << count << " " << count_c << " " << count_v << endl;
        }
        if (count_c > count_v)
            count += (count_v * 2) + count_c;
        else
            count += (count_c * 2) + count_v;
        cout << count << endl;
    }

    return 0;
}