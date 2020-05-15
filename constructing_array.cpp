/**
**********************************************************************************************************************************************************************************************************************************
* @file:	constructing_array.cpp
* @author:	Saket vajpai
* @date:	2020年05月16日 04:56:19 Saturday
* @brief:	Codeforces 642-D
**********************************************************************************************************************************************************************************************************************************
**/

#include <bits/stdc++.h>
using namespace std ; 
#define ll              int
// #define cini(x)	        scanf("%lld",&x)
// #define cins(s)	        scanf("%s",s)
#define deb(x)          cout << x << " " ;
#define out(x)          cout << x << endl ;
#define endl            '\n'
#define pb              push_back
#define mp              make_pair
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
#define     ss          second
#define     ff          first
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


// struct cmp{
// bool operator() (const pair<int, pair<int,int> > &a1, const pair<int, pair<int,int> > &a2)
// const {
//     return(a1.first > a2.first) ;
//     // return false;
//     }
// };

int main(){
    fastio ;
    w(t)
    {
    ll a=0, b=0, c=0, d=0, e=0, p=0, q=0, r=0 ;
    ll ans=0, res=0, cnt=0, sum=0, diff=0, mul=1 ;
    // loop(0,n,i) brr[i]=0;
    // char s[100005];
    string s ;
    ll n,m ;
    cin >> n ;
    // cin >> m ;
    // cin >> s ;
    ll arr[n+1], brr[n+1]; 
    // loop(0,n,i) cin >> arr[i] ;
    loop(0,n+1,i) arr[i]=0;
    set<pair<int,pair<int,int> >> se ; 
    se.insert(mp(-n,mp(0,n-1)));
    int i=1;
    ll stp;
    se.insert(mp(-n,mp(0,n-1)));
	stp=0;
	while(!se.empty()) {
	pair<ll,pair<ll,ll> > sten=*(se.begin());
	se.erase(se.begin());
	ll en=sten.ss.ss, st=sten.ss.ff;
	ll len=en-st+1;
	if(len <= 0 || en < st) continue;
	++stp;
	if(len==1) {
		arr[st]=stp;
		continue;		
	}
	ll md;
	if(len%2==0) {
		md=(st+en-1)/2;
	} else {
		md=(st+en)/2;
	}
	arr[md]=stp;
	se.insert(mp(-(md-1-st+1),mp(st,md-1)));
	se.insert(mp(-(en-md),mp(md+1,en)));
	}
        
    loop(0,n,i)   deb(arr[i])
    out("")
    }
    return 0 ;
}

// g++ x.cpp -o as && ./as
