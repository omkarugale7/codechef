#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        int c = 1, count = 0;
        for (int i = 0; i < s.length(); i++)
        {
            int z = int(s[i] - '0');
            if (z == c)
            {
                continue;
            }
            else
            {
                if (c == 1)
                {
                    c = 0;
                }
                else
                {
                    c = 1;
                }
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}