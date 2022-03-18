#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int num[n];
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    int temp = num[0];
    for (int i = 1; i < n; i++)
    {
        temp = temp & num[i];
    }
    cout << temp << endl;
    return 0;
}