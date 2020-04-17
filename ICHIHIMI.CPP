
#include <bits/stdc++.h>
using namespace std ; 
#define ll long long int
#define cini(x)	scanf("%lld",&x)
#define cins(s)	scanf("%s",s)
#define deb(x) cout << x << " " ;
#define out(x) cout << x << endl ;
#define endl '\n'
#define pb push_back
#define mk make_pair
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(x,n,v) for(ll v=x; v<n; v++)
#define mod 1000000007
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
#define setbits(x) __builtin_popcount(x)
#define zrobits(x) __builtin_ctz(x)
#define ps(x,y) fixed<<setprecision(y)<<x
#define w(t) int t; cin>>t; while(t--) 
#define vt vector<ll> 
typedef vector<int>		vi;
#define vtt vector<pair<ll,ll>> 
#define mapp map<ll,ll> 
#define pii pair <int, int>
#define sett set<ll>
int dp[1000][1000] ;
int mpow(int base, int exp); 
void ipgraph(int m);
void dfs(int u, int par);
const int N = 130, M = N;
ll arr[100001], brr[30001]; 
vi g[N];
int a[N][N];
int n;
//=======================

bool f(tuple<int, int, int> &l, tuple<int, int, int> &r) {
    if(get<1>(l) != get<1>(r)) return get<1>(l) < get<1>(r);
    return get<0>(l) < get<0>(r);
}

int main(){
    fastio ;
    w(t){

        ll a=0, b=0, c=0, d=0, p=0, q=0, r=0, ans=0, res=0 ;
        ll n, m, k;
        cin >> n >> m >> k ;
        // cin >> m ;
        // loop(0,n,i) cin >> arr[i];   
        p=n;
        q=m;

        while(m--){
            n = n/2 + 10 ;
            if(n <= 20) break ;
        }

        b = n - k*10 ;

        if(p <= 20){
            if((p-(k*10)) <= 0 ) cout << "YES" << endl ;
            else cout << "NO" << endl ;
        }
        // else if(q == 0 && k == 0) cout << "NO" << endl ;
        else if(b > 0) cout << "NO" << endl ;
        else cout << "YES" << endl ;

    }
    return 0 ;
}








int mpow(int base, int exp) {
  base %= mod;
  int result = 1;
  while (exp > 0) {
    if (exp & 1) result = ((ll)result * base) % mod;
    base = ((ll)base * base) % mod;
    exp >>= 1;
  }
  return result;
}

void ipgraph(int n, int m){
	int i, u, v;
	while(m--){
		cin>>u>>v;
		g[u-1].pb(v-1);
		g[v-1].pb(u-1);
	}
}

void dfs(int u, int par){
	for(int v:g[u]){
		if (v == par) continue;
		dfs(v, u);
	}
}