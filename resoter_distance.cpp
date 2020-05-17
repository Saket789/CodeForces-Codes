/**
**********************************************************************************************************************************************************************************************************************************
* @file:	resorer_distance.cpp
* @author:	Saket vajpai
* @date:	2020年05月18日 03:56:56 Monday
* @brief:	Codeforces 642-E
**********************************************************************************************************************************************************************************************************************************
**/
#include <bits/stdc++.h>
using namespace std ; 
#define ll              long long int
// #define cini(x)	        scanf("%lld",&x)
// #define cins(s)	        scanf("%s",s)
#define deb(x)          cout << x << "  " ;
#define out(x)          cout << x << endl ;
#define endl            '\n'
#define pb              push_back
#define mk              make_pair
#define fastio          ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(x,n,v)     for(ll v=x; v<n; v++)
#define loopr(n,x,v)     for(ll v=n-1; v>=x; v--)
#define mod             1000000007
#define all(x)          x.begin(), x.end()
#define clr(x)          memset(x, 0, sizeof(x))
#define sortall(x)      sort(all(x))
#define tr(it, a)       for(auto it = a.begin(); it != a.end(); it++)
#define PI              3.1415926535897932384626
#define setbits(x)      __builtin_popcount(x)
#define zrobits(x)      __builtin_ctz(x)
#define ps(x,y)         fixed<<setprecision(y)<<x
#define w(t)            int t; cin>>t; while(t--) 
#define     vi          vector<ll>
#define     vtt         vector<pair<ll,ll>> 
#define     pii         pair<ll,ll> 
#define  mapp           map<ll,ll> 
#define  sett           set<ll>
int dp[1000][1000] ;
ll mpow(ll base, ll exp); 
void ipgraph(int m);
void dfs(int u, int par);
const int N = 130, M = N;
//====================================
//====================================
ll h[100005]; 
ll n,m ;
ll a=0, b=0, c=0, d=0, e=0, p=0, q=0, r=0, s=0, u=0 ;

ll f(int x){
    ll le = 0, ge = 0;
    for(int i = 0; i < n; i++)
        if(h[i] < x)
            le += x - h[i];
        else
            ge += h[i] - x;
    if(le > ge)
        return (ll) ge * m + (le - ge) * a;
    return (ll) le * m + (ge - le) * r;
}
int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    cin >> n >> a >> r >> m;
    m = min(m, a + r);
    for(int i = 0; i < n; i++)
        cin >> h[i];
    int lo = -1, hi = 1e9 + 1;
    while(hi - lo > 2){
        int lh = lo + (hi - lo) / 3, rh = hi - (hi - lo) / 3;
        if(f(lh) < f(rh))
            hi = rh;
        else
            lo = lh;
    }
    cout << f(lo + 1) << '\n';
}

// g++ x.cpp -o as && ./as