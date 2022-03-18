#include <iostream>

using namespace std;
int main()
{
    int n, i = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int num[n];
    for (int i = 0; i < n; i++)
    {
        num[i] = i;
    }
    int k = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == num[k])
        {
            k++;
        }
        else if (arr[i] == -1)
        {
            continue;
        }
        else if (arr[i] != num[k])
        {
            cout << arr[i] - 1 << endl;

            break;
        }
    }
    if (i == n)
    {
        cout << (arr[n - 1] + 1) << endl;
        cout << " d" << endl;
    }

    return 0;
}
/*1
4 3
1 0 2 4
-1 -1 -1 1 
-1 -1 0 1  
-1 0 1 2   
0 1 2 4    
-1 -1 -1 0 
-1 -1 0 2  
-1 0 2 4   
-1 -1 -1 2
-1 -1 2 4
-1 -1 -1 4 */