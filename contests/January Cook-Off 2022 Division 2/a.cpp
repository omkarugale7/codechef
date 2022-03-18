[In reply to o u]
[In reply to Hecker]
#include<bits/stdc++.h>
#include<string>
#include <sstream>
using namespace std;
#include<bitset>
#define gc getchar_unlocked
#define ll long long
#define PI 3.1415926535897932384626
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define br printf("\n")
#define fo(i, n) for(i=0;i<n;i++)
#define fox(i, a,b) for(i=a;i<=b;i++)
#define reps(i, a,b) for(int i=a;i<=b;i++)
#define repe(i, a,b) for(int i=a;i>=b;i--)
#define ps(x,y) fixed<<setprecision(y)<<x
#define Fo(i, k, n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define deb(x) cout << #x << " = " << x << endl;
#define deb2(x, y) cout << #x << " = " << x << ", " << #y << " = " << y << endl
#define deba(i, a, n) fo(i, n){cout << a[i] << " ";}
#define pb push_back
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, x) for(auto it = x.begin(); it != x.end(); it++)
#define trr(it, x) for(auto it = x.rbegin(); it != x.rend(); it+)
#define sum_v(v) accumulate(v.begin(), v.end(), 0)
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
void yes()
{
    cout<<"YES"<<endl;
}
void no()
{
    cout<<"NO"<<endl;
}
template<typename  T> void amax(T& t1, T t2)
{
    t1=max(t1,t2);
}
template<typename  T> void amin(T& t1, T t2)
{
    t1=min(t1,t2);
}
void readvl(vl &v,ll n)
{
    for(ll i=0; i<n; i++)cin>>v[i];
}
void printvl(vector<ll>arr,ll n)
{
    for(ll i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;
}
bool cmp(pl p1, pl p2)
{
    return p1.F< p2.F;
}


/* ========== YOUR CODE HERE ========= */
bool isprime(long long int n)
{
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)return false;
    }
    return true;
}


ll mod=998244353;
ll binpow(ll a, ll b)
{
    ll ans=1;
    a = a % mod;
    while(b)
    {
        if(b&1)
            ans=(ans*a);
        b/=2;
        a=(a*a);
        ans%=mod;
        a%=mod;
    }
    return ans;
}



//315 :-> 3 3 5 7
void primeFactors(ll n,map<ll,ll> &mp)
{
    while (n % 2 == 0)
    {
        mp[2]++;
        n = n/2;
    }
    for (int i = 3; i*i <= n; i = i + 2)
    {
        while (n % i == 0)
        {
            mp[i]++;
            n = n/i;
        }
    }
    if (n > 2)
        mp[n]++;
}


ll lengthOfLIS(vector<ll>& a)
{
    ll n = a.size();
    vector<ll> len;
    for(ll i = 0; i < n; i++)
    {
        auto lb = upper_bound(len.begin(), len.end(), a[i]);
        if(lb != len.end())
        {
            *lb = min(*lb, a[i]);
        }
        else
        {
            len.push_back(a[i]);
        }
    }
    return len.size();
}

void Aur_btao_kya_hal_hai()
{
    ll n,m;
    cin>>n>>m;
    vl a(n),b(m);
    readvl(a,n);
    readvl(b,m);
    ll mx1=1,mx2=1;
    mx1 = lengthOfLIS(a);
    mx2 = lengthOfLIS(b);
    cout<<mx1+mx2<<endl;
}




int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    ll testcasehai = 1;
    cin>>testcasehai;
    //SieveOf(1000000);
    //Divisors(1000000);

    while(testcasehai--)
    {
        Aur_btao_kya_hal_hai();
    }
    return 0;
}

/*

bool prime[10000001];
void SieveOf(int n)
{
    //bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++)
    {

        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

}

*/