
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
int dp[1000][1000] ;
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

int main(){
    fastio ;
    w(t){

        ll n, m;
        cin >> n ;
        cin >> m ;
        char arr[n][m] ;
        int p=1, q=0 ;

        loop(0,n,i){
            loop(0,m,j){
                if(p == 1){
                    // cout << "B";
                    arr[i][j] = 'B' ;
                    q = 1 ;
                    p = 0 ;
                }
                else{
                    // cout << "B";
                    // else 
                    // cout << "W";
                    arr[i][j] = 'W';
                    q = 0 ;
                    p = 1 ;
                }
            }
            // cout << endl ;
        }
                    if((m*n)%2 == 0){
                        arr[n-2][m-1] = 'B';
                        arr[n-2][m-2] = 'W';
                        arr[n-1][m-1] = 'B';
                    } 
        loop(0,n,i){
            loop(0,m,j){
                cout << arr[i][j] ;
            }
            cout << endl ;
        }

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