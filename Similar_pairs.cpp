
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
#define ps(x,y)         fixed << setprecision(y) << (x)
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








vi g[N];
int a[N][N];
// int n
int main(){
    fastio ;
    w(t)
    {
    int n;
    cin >> n;
    vector<int> v(n);
    int a = 0, b = 0, l=0;
    for (int &e : v) {
        cin >> e;
        if (e % 2 == 0) {
            a++;
        } else {
            b++;
        }
    }
    if (a % 2 != b % 2) {
        cout << "NO\n";
    } else {
        if (a % 2 == 0) {
            cout << "YES\n";
        } else {
            for (int i = 0; i < n; i++) {
                for (int j = i + 1; j < n; j++) {
                    if (v[i] % 2 != v[j] % 2 && abs(v[i] - v[j]) == 1) {
                        cout << "YES\n";
                        l=1;
                        break;
                    }
                }
                    if(l == 1) break;
            }
                    if(l == 1)    continue;
            cout << "NO\n";
        }
    }
    }
    return 0 ;
}

// g++ x.cpp -o as && ./as