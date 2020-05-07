/**
**********************************************************************************************************************************************************************************************************************************
* @file:	CardConstruction.cpp
* @author:	SAket vajpai
* @date:	2020年05月07日 17:16:43 Thursday
* @brief:	codeforces 639
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

vi g[N];
int a[N][N];
// int n;






int main(){
    fastio ;

        ll arr[100000], brr[100000]; 
        // loop(0,n,i) cin >> arr[i] ;
        arr[1]=3 ;
        loop(2,100000,i){
            arr[i] = arr[i-1]+3;
        }
        brr[1]=3;
        loop(2,100000,i){
            brr[i] = arr[i]+brr[i-1];
        }
        brr[1]=2;
        loop(2,100000,i){
            brr[i] -= i ;
        }

    w(t)
    {
        ll a=0, b=0, c=0, d=0, e=0, p=0, q=0, r=0 ;
        ll ans=0, res=0, cnt=0, sum=0, diff=0, mul=1 ;
        // loop(0,n,i) arr[i]=0;
        // loop(0,n,i) brr[i]=0;
        // char s[100005];
        ll n,m ;
        cin >> n ;
        // cin >> m ;
        // cin >> s ;
        ll i=1;
        while(brr[i] < n){
            i++;
        }

        if(n == 1) 
            cout << 0 <<endl;
        else if(n == 2 || n == 3)
            cout << 1 <<endl;
        else{
            // cout << brr[i]-n-i+1<<endl;
            while(n>0){
                auto itr = lower_bound(brr+0,brr+100000,n);
                if(*itr == n){
                    ans++ ;
                    n=0;
                    break;
                    // deb("sd")
                }
                else{
                    // deb("tjut")
        if(n == 1) 
            break;
        else if(n == 2 || n == 3){
            ans++;
            break;
        }
            
                    a = itr-brr-1 ;
                    ans++;
                    n -= brr[a];
                }
            }
            cout << ans << endl;
        }

    }
    return 0 ;
}

// g++ x.cpp -o as && ./as