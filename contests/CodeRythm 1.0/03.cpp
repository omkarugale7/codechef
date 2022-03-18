#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int answer(int arr[] , int n , int ansindex)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
       int k =  arr[i]/ansindex;
        if (arr[i]%ansindex!=0)
        k+1;
        ans +=k;
        
    }
    
    
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int maxno = *max_element(arr, arr + n);

        while ()
        {
            /* code */
        }
        
    }
    return 0;
}