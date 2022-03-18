#include <iostream>
using namespace std;

long long hcf(long long a, long long b){
	if(b==0) return a;
	return hcf(b, a%b);
}


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int tc;
	cin >> tc;
	//tc = 1;
	while(tc--){
	long long a, b;
	cin >> a >> b;
	long long h;
	do{
		h = hcf(a, b);
		a = a/h;
        cout<<h<<endl;
	}while(h!=1);
	// if(a>1) cout << "No\n";
	// else cout << "Yes\n";	
    }
	return 0;
}
// #include <iostream>

// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     for (int i = 0; i < t; i++)
//     {
//         int a, b, z;
//         cin >> a >> b;
//         while (b != 0)
//         {
//             z = b;
//             b = a % b;
//             a = z;
//         }
        

//     }

//     return 0;
// }
