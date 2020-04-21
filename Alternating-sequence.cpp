
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
#define mapp map<long,long> 
#define sett set<long>
int dp[1005][1005] ;
int mpow(int base, int exp); 
void ipgraph(int m);
void dfs(int u, int par);
const int N = 130, M = N;
//=======================

vi g[N];
int a[N][N];
int n;
bool f(tuple<int, int, int> &l, tuple<int, int, int> &r) {
    if(get<1>(l) != get<1>(r)) return get<1>(l) < get<1>(r);
    return get<0>(l) < get<0>(r);
}
char s[1000009] ;

int main(){
    fastio ;
    w(t){

        ll n, m;
        cin >> n ;
        // cin >> m ;
        ll arr[n] ;
        // cin >> s ;
        loop(0,n,i) cin >> arr[i];   
		ll a=0, b=0, ans=0, cnt=0, sum=0 ;
		ll mx=0, mn=2, p=1, q=1, i=0 ;
		if(arr[0] > 0) b=1 ;

		// if(b == 1){
		while(i != n){
			mx=0;
			while(arr[i] > 0 && i<n){
				mx=max(mx,arr[i]);
				i++;
			} 
			sum += mx ;
			if(i == n) break ;
			mn=-INT_MAX;
			while(arr[i] < 0 && i<n){
				mn=max(arr[i],mn);
				i++;
			}
			sum += mn ;
		}
		out(sum);

        

    }
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