
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
//=======================

vi g[N];
int a[N][N];
// int n;






int main(){
    fastio ;
    // ll arr[200002], brr[200002]; 
    //     loop(0,200001,i) arr[i]=0;
    //     loop(0,200001,i) brr[i]=0;

    w(t)
    {
        ll ans=0, res=0, cnt=0;
        // char s[100005];
		string s ;
        ll n,m ;
        // cin >> n ;
        // cin >> m ;
        cin >> s ;
		n = s.length();
        ll a=0, b=0, c=0, d=0, e=0, p=0, q=0, r=0;
		loop(1,n,i){
			if(s[i] != s[i-1]) p=1;
		}

		if(p == 0){
			if(s[0] == '1')
				s += s ;
				cout << s << endl ;
		}
		else{
			// ll len = s.length() ;
			// string s1 = 'a' ;
			char c1 = '0' ;
			loop(0,n,i) if(s[i] == '1' ) a++ ;
			loop(0,n,i) if(s[i] == '0' ) b++ ;
			string s1="10", s2="01";
			if(a == n || b == n){
				cout << s ;
			}
			else{
				loop(0,n,i)   cout << s1 ;
			}
			// loop(1,n,i){
			// 	if(s[i] == '1'){
			cout << endl ;
			// 	} 
			// 	else if(s[i] == '1'){
			// 	} 
			// } 
		}



    }
    return 0 ;
}

// g++ x.cpp -o as && ./as