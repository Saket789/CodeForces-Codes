
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
        ll arr[33] ;
    w(t){

        ll n, m;
        cin >> n ;
        // cin >> m ;
        // cin >> s ;

        // loop(0,n,i) cin >> arr[i];   
		ll ans=0, cnt=0;
		ll x=0, y=0 ;
		// loop(1,n+1,i){
		// 	x=1;
		// 	y=1*i;
		// 	if(i != n)
		// 	while(x <= n){
		// 		y <<= 1 ;
		// 		x += y*i ;
		// 		if(x == n) ans=i;
		// 	}
		// 	else if(i == n) ans = i ;
		// 	if(ans > 0) break ;
		// }
		y=1;
		arr[0]=1;
		ans=1;
		loop(1,32,j){
			y <<= 1 ;
			ans += y ;
			arr[j]=ans ;
		}

		loop(0,32,i){
			if(n%arr[i] == 0){
				ans = n/arr[i];
			}
		}

        cout << ans <<endl ;

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