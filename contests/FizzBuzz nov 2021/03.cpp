#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
      long long   int n, m;
        cin >> n >> m;         // 7 , 5
       long long  int div = m + 1;       //6
       long long  int zeros = n - m;     // 2
       long long  int a = zeros / div;   // 0
       long long  int k = zeros % div;   // 2
        a = (a * (a + 1)) / 2; // 0
       long long  int b = a + 1;         //1
        b = (b * (b + 1)) / 2; // 1
        cout << (a * (div - k)) + (b * k) << endl;
    }

    return 0;
}