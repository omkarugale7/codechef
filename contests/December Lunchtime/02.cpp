#include <bits/stdc++.h>
using namespace std;

#define ll          long long
#define vi          vector<int>
#define vll         vector<ll>
#define pll         pair<ll, ll>
#define pii         pair<int, int>
#define ld          long double
#define ff          first
#define ss          second
#define vs          vector<string>
#define vpll        vector<pll>
#define vb          vector<bool>
#define mp          make_pair
#define pb          push_back
#define endl        '\n'

const ll INF       = 2e18;
const ll mod       = 1000000007;
const ll mod2      = 998244353;




signed main(){

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif



    int tc = 0, tt = 1;
    cin >> tt;
    while (tc++ < tt)
    {

        ll n;cin>>n;
        vector <ll> a(n),b(n);
        for(ll i=0;i<n;i++) {
            cin>>a[i], b[i] = a[i];
        }
        sort(b.begin(), b.end());
        ll st = n-1;
        ll ans = 0;
        while(st>0) {
            if(a[st]!=b[st]) {
                ll ma = b[st],mi = a[st];
                ll i = st;
                while(i>0) {
                    if(a[i]!=b[st]) i--;
                    else break;
                    mi = min(a[i],mi);
                }
                ll pos = lower_bound(b.begin(), b.end(),mi) - b.begin();
                for(ll j=pos;j<i;j++) mi = min(mi,a[j]);
                while(b[pos]!=mi) {
                    pos = lower_bound(b.begin(), b.end(),mi) - b.begin();
                    for(ll j=pos;j<i;j++) mi = min(mi,a[j]);
                }
                ans+=(ma-mi);
                st = pos-1;
            }
            else st-=1;
        }
        cout<<ans<<"\n";



    }

    return 0;
}