
#include <bits/stdc++.h>
using namespace std ; 
#define ll int
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
#define pii pair <ll, ll>
#define sett set<ll>
int dp[1000][1000] ;
int mpow(int base, int exp); 
void ipgraph(int m);
// void dfs(int u, int par);
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
vt vec[100000+2] ;
vt vec1[100000+2] ;
stack<ll> st;
sett leaves;
bool mark[100002];

ll cnt=0;
bool flag=false;

void dfs(ll i, ll j){
    
    mark[i]=1;
    vec1[j].pb(i);
    if(leaves.find(i) != leaves.end()){
        if(j%2 == 0) flag=true;   
    }
    for(ll k=0; i<vec[i].size(); k++ )
    {
        if(!mark[vec[i][k]]){
            dfs(vec[i][k],j+1);
        }
    }


}

    //  thankful to monish 
    //  learning dfs

int main(){
    fastio ;
    ll n ;
    cin >> n;
    ll a, b ;
    ll p=n, cnt2=0;
    // st.push(1);
    // mark[1]=true;
    // vt leaves ;
    p--;
    while(p--){
        cin >> a >> b ;
        // vec[a].pb(b);
        // vec[b].pb(a);
        vec[a].pb(b);
        vec[b].pb(a);
    }

    loop(1,n+1,i){
        if(vec[i].size() == 1){
            // p=i;
            leaves.insert(i);
            p=i;
            // break ;
        } 
    }
    dfs(p,1);
    ll min=3, maxx=n-1-leaves.size() ;

    loop(1,n+1,i){
        for(int j=0; j<vec[i].size(); j++){
            if(leaves.find(vec[i][j]) != leaves.end()){
                cnt++;
                break;
            }
        }
    }
    maxx += cnt ;

    cout << min << " " << maxx << endl ;
    // cout << n-1+cnt2-cnt << endl;

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

// void ipgraph(int m){
// 	int i, u, v;
// 	while(m--){
// 		cin>>u>>v;
// 		g[u-1].pb(v-1);
// 		g[v-1].pb(u-1);
// 	}
// }

// void dfs(int u, int par){
// 	for(int v:g[u]){
// 		if (v == par) continue;
// 		dfs(v, u);
// 	}
// }