/* Code Editor: Omkar Ugale
Time : .  jan 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int dragon[3], sloth[3], dr = 0, sl = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> dragon[i];
            dr += dragon[i];
        }
        for (int i = 0; i < 3; i++)
        {
            cin >> sloth[i];
            sl += sloth[i];
        }
        if (dr > sl)
            cout << "DRAGON" << endl;
        else if (sl > dr)
            cout << "SLOTH" << endl;
       else if (dragon[0] > sloth[0])
            cout << "DRAGON" << endl;
        else if (dragon[0] < sloth[0])
            cout << "SLOTH" << endl;
        else if (dragon[1] > sloth[1])
            cout << "DRAGON" << endl;
        else if (dragon[1] < sloth[1])
            cout << "SLOTH" << endl;
        else if (dragon[2] > sloth[2])
            cout << "DRAGON" << endl;
        else if (dragon[2] < sloth[2])
            cout << "SLOTH" << endl;
        else if (dr == sl)
            cout << "TIE" << endl;
    }
    return 0;
}