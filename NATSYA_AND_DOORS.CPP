
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
#define fastio          ios_base::sync_with_stdio(false); cin.tie(NULL);
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
    // loop(0,200001,i) arr[i]=0;
    // loop(0,200001,i) brr[i]=0;
    char s[100005];

    w(t)
    {

        ll n,m ;
        cin >> n ;
        cin >> m ;
        // cin >> s ;
	    ll a=0, b=0, c=0, d=0, e=0, p=0, q=0, r=0;
    	ll ans=0, res=0, cnt=0;
		ll arr[n], brr[n], crr[n];
        loop(0,n,i) crr[i]=0 , brr[i]=0, arr[i]=0 ;
        loop(0,n,i) cin >> arr[i] ;

		loop(0,n,i){
			if(i == 0 || i == n-1) continue ;
			else{
				if(arr[i] > arr[i-1] && arr[i] > arr[i+1]) brr[i]=1 ;
			}
		}
		
		loop(1,n,i){
			// if(brr[i] == 1)
			crr[i] = crr[i-1]+brr[i] ;
			// cout << crr[i] <<" ";
		}
		vtt vec ;
		m--;
		loop(0,n-m,i){
			// if(i == 0 ){
			// // if(crr[i] == crr[i+1]){
			// 	if(i+m == n-1){
			// 	vec.pb(mk(crr[i+m]-crr[i], i));
			// 	// cout << crr[i+m]-crr[i] <<" ";
			// 	// cout << " i " << i << "  " ;
			// 	}
			// 	else if(crr[i+m] == crr[i+1+m] && crr[i+m-1] == crr[i+m]){
				vec.pb(mk( crr[i+m-1]-crr[i], i));
			// 	// cout << crr[i+m]-crr[i] <<" ";
			// 	// cout << " i + m" << i+m << "  " ;
			// 	}
			// // }
			// }
			// // else if(crr[i-1] == crr[i] && crr[i] == crr[i+1]){
			// else if(crr[i] == crr[i+1]){
			// 	if(i+m == n-1){
			// 	vec.pb(mk(crr[i+m]-crr[i], i));
			// 	// cout << crr[i+m]-crr[i] <<" ";
			// 	// cout << " i " << i << "  " ;
			// 	}
			// 	else if(crr[i+m] == crr[i+1+m] && crr[i+m-1] == crr[i+m]){
			// 	vec.pb(mk(	crr[i+m]-crr[i], i));
			// 	// cout << crr[i+m]-crr[i] <<" ";
			// 	// cout << " i + m" << i+m << "  " ;
			// 	}
			// }
		}
		// loop(0,n-m,i){
		// 	if(i == 0 ){
		// 	// if(crr[i] == crr[i+1]){
		// 		if(i+m == n-1){
		// 		vec.pb(mk(crr[i+m]-crr[i], i));
		// 		// cout << crr[i+m]-crr[i] <<" ";
		// 		// cout << " i " << i << "  " ;
		// 		}
		// 		else if(crr[i+m] == crr[i+1+m] && crr[i+m-1] == crr[i+m]){
		// 		vec.pb(mk(	crr[i+m]-crr[i], i));
		// 		// cout << crr[i+m]-crr[i] <<" ";
		// 		// cout << " i + m" << i+m << "  " ;
		// 		}
		// 	// }
		// 	}
		// 	// else if(crr[i-1] == crr[i] && crr[i] == crr[i+1]){
		// 	else if(crr[i] == crr[i+1]){
		// 		if(i+m == n-1){
		// 		vec.pb(mk(crr[i+m]-crr[i], i));
		// 		// cout << crr[i+m]-crr[i] <<" ";
		// 		// cout << " i " << i << "  " ;
		// 		}
		// 		else if(crr[i+m] == crr[i+1+m] && crr[i+m-1] == crr[i+m]){
		// 		vec.pb(mk(	crr[i+m]-crr[i], i));
		// 		// cout << crr[i+m]-crr[i] <<" ";
		// 		// cout << " i + m" << i+m << "  " ;
		// 		}
		// 	}
		// }

		sort(all(vec));

		for(auto it: vec){
			if(res < it.first){
				res = it.first ;
				ans = it.second ;
			}
			else if(res == it.first) ans = min(ans,it.second);
			// cout << it.first << " " << it.second <<endl ;
		}

		cout << res+1 << " " << ans+1 << endl ; 

    }
    return 0 ;
}

// g++ x.cpp -o as && ./as