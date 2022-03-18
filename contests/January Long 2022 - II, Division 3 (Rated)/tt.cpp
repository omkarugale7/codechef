/* Editor: Omkar Ugale
Time : .  jan 2022 */
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int i = 10;
    int j = 8;
    char name[6] = {'h', 'a', 'c', 'k', 'e', 'r'};
    cout << *(name) << endl;
    cout << *(name + 1) << endl;
    cout << *(name + 2) << endl;
    cout << *(name + 3) << endl;
    cout << *(name + 4) << endl;
    cout << *(name + 5) << endl;
    cout << (int)*(name + 6) << endl;
    scanf("%d", (int *)(name + 6));
    scanf("%d", (int *)(name + 10));

    printf("%d", i);
    printf("%d", j);

    return 0;
}
