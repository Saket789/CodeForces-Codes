
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

vi g[N];
int a[N][N];
// int n;






int main(){
    fastio ;

        ll a=0, b=0, c=0, d=0, e=0, p=0, q=0, r=0 ;
        ll ans=0, res=0, cnt=0, sum=0, diff=0, mul=1, minn=0 ;
        // loop(0,n,i) arr[i]=0;
        // loop(0,n,i) brr[i]=0;
        char s[100005];
        ll n,m ;
        cin >> n ;
        // cin >> m ;
        // cin >> s ;
        ll arr[n], brr[n], crr[n], drr[n]; 
        loop(0,n,i) cin >> arr[i] ;
        brr[0]=arr[0];
        loop(1,n,i) brr[i] = brr[i-1]+arr[i] ;
        vi v1, v2 ;
        loopr(n,0,i){
            if(i == n-1) crr[i]=0;
            else if(arr[i] > arr[i+1]){
                crr[i]=-1;
                v1.pb(i);
            }
            else crr[i]=0; 
        }

        loop(0,n,i){
            if(i == 0) drr[i]=0;
            else if(arr[i] < arr[i-1]){
                drr[i]=-1;
                v2.pb(i);
            }
            else drr[i]=0; 
        }

        loop(0,n,i){
            ll idx = i ;
            if(idx == 0){
                vector<ll>::iterator itr = upper_bound(v1.begin(), v1.end(), idx);
                vector<ll>::iterator itr1 = upper_bound(v1.begin(), v1.end(), idx);
            }
            // if(idx == n-1)
            // min_element(brr,brr+idx);
        }





    return 0 ;
}

// g++ x.cpp -o as && ./as