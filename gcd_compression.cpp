/**
**********************************************************************************************************************************************************************************************************************************
* @file:	gcd_compression.cpp
* @author:	SAket
* @date:	2020年06月21日 00:55:04 Sunday
* @brief:	codeforces 651 div-2 B
**********************************************************************************************************************************************************************************************************************************
**/
#include <bits/stdc++.h>
using namespace std ; 
#define ll              long long int
// #define cini(x)	        scanf("%lld",&x)
// #define cins(s)	        scanf("%s",s)
#define deb(x)          cout << (x) << "  " ;
#define out(x)          cout << (x) << endl ;
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


vi vprime ; 
// sieve(100001);
void sieve(ll n)
{
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
    for (ll p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (ll i=p*p; i<=n; i += p)
                prime[i] = false;
        }
    }
    for (ll p=2; p<=n; p++)
       if (prime[p])
            vprime.pb(p);
        //   cout << p << " ";
}







vi g[N];
int a[N][N];
// int n
int main(){
    fastio ;
    w(t)
    {
        ll a=0, b=0, c=0, d=0, e=0, p=0, q=0, r=0 ;
        ll ans=0, res=0, cnt=0, sum=0, diff=0, mul=1, val=0 ;
        // loop(0,n,i) brr[i]=0;
        // char s[100005];
        string s ;
        ll n,m ;
        cin >> n ;
        // cin >> m ;
        // cin >> s ;
        ll arr[2*n+1], brr[n+1]; 
        vtt vec, v1 ;
        loop(0,n*2,i){
            cin >> arr[i] ;
            // vec.pb(mk(arr[i],i));
        }
        // sort(all(vec));
        m = n - 1 ;
        sett st ;
        // while(m){
            loop(0,2*n,i){
                auto itr = st.find(i);
                if(itr != st.end()) continue;
                loop(i+1,2*n,j){
                    auto itr1 = st.find(j);
                    if(itr1 != st.end()) continue;
                    if(arr[i]%2 == 0 && arr[j]%2 == 0){
                        m--;
                        v1.pb(mk(i+1,j+1));
                        st.insert(i);
                        st.insert(j);
                        break;
                    }
                if(m <= 0) break ;
                    if(arr[i]%2 == 1 && arr[j]%2 == 1){
                        m--;
                        v1.pb(mk(i+1,j+1));
                        st.insert(i);
                        st.insert(j);
                        break;
                    }
                if(m <= 0) break ;
                }
                if(m <= 0) break ;
            }
        // }

        for(auto ittr : v1){
            cout << ittr.first << " " << ittr.second << endl ;
        }
        // out("fa")
    }
    return 0 ;
}

// g++ x.cpp -o as && ./as