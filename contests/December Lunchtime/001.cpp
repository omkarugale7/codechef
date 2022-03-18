#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int a, b, c;
        cin >> a >> b >> c;
        int aa = a + b;
        int bb = c;
        if (aa > bb)
           cout << "TRAIN" << endl; 
        else if (aa < bb)
            cout << "PLANEBUS" << endl;
        else
            cout << "EQUAL" << endl;
    }

    return 0;
}