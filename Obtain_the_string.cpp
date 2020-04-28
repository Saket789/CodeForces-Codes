
#include <bits/stdc++.h>
using namespace std ; 
#define ll              int
// #define cini(x)	        scanf("%lld",&x)
// #define cins(s)	        scanf("%s",s)
#define deb(x)          cout << x << "  " ;
#define out(x)          cout << x << endl ;
#define endl            '\n'
#define pb              push_back
#define mk              make_pair
#define fastio          ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(x,n,v)     for(ll v=x; v<n; v++)
#define loopr(n,x,v)     for(ll v=n; v>=x; v--)
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
// int dp[1000][1000] ;
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

    w(t)
    {
        ll a=0, b=0, c=0, d=0, e=0, p=0, q=0, r=0;
        ll ans=0, res=0, cnt=0, sum=0;
        // loop(0,n,i) arr[i]=0;
        // loop(0,n,i) brr[i]=0;
        // char s[100005];
        string s, s1, s2, z ;
        ll n,m ;
        // cin >> n ;
        // cin >> m ;
        cin >> s1 >> s2;
        n=s1.length();
        m=s2.length();
        ll dp[n+1][26];
        // cout << n <<s1<< endl ;
        loop(0,n+1,i)   loop(0,26,j)    dp[i][j]=INT_MAX;
        loopr(n-1,0,i){
            // deb(":DFVSDv");
            loop(0,26,j){
                dp[i][j] = dp[i+1][j];
            }
            dp[i][s1[i]-'a'] = i ;
        }

        // loop(0,n,i){
        //     deb(":DFVSDv");
        //     loop(0,26,j){
        //         // dp[i][j] = dp[i][j];
        //         if(dp[i][j] != INT_MAX)
        //         cout << dp[i][j] << " ";
        //         else deb("-");
        //     }
        //     cout << endl;
        //     // dp[i][s[i]-a] = i ;
        // }
        res=1;
        ll pos=0;
        loop(0,m,i){
            if(pos == n){
                pos=0;
                ++res;
            }
            if(dp[pos][s2[i]-'a'] == INT_MAX){
                pos=0;
                ++res;
            }
            if(dp[pos][s2[i]-'a'] == INT_MAX && pos==0){
                res = INT_MAX;
                break ;
            }
            pos = dp[pos][s2[i]-'a']+1;
        }

        if(res >= INT_MAX)
        cout << -1 << endl ;
        else
        cout << res << endl ;

    }
    return 0 ;
}

// g++ x.cpp -o as && ./as