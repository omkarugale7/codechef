
#include <iostream>
#include <map>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        map<int, int> ref;
        for (int i = 0; i < n; i++)
        {
            int reminder;
            reminder = a[i] % 3;
            ref[reminder]++;
        }

        int answer = -1;
        answer = max(answer, ref[0] + ref[1]);
        answer = max(answer, ref[1] + ref[2]);
        answer = max(answer, ref[0] + ref[2]);
        cout << answer << endl;
    }
    return 0;
}