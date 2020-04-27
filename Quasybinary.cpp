
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
        vi vec, vec1 ;

void solve(ll *arr, ll i , ll j){
    if(j >= 6) return ;
    else{
         vec.pb(i*10);
         vec.pb(i*10+1);
         solve( arr, i*10, j+1 );
         solve( arr, i*10+1, j+1 );
    }
}



int main(){
    fastio ;

    // w(t)
    // {
        ll a=0, b=0, c=0, d=0, e=0, p=0, q=0, r=0;
        ll ans=0, res=0, cnt=0, sum=0;
        // loop(0,n,i) arr[i]=0;
        // loop(0,n,i) brr[i]=0;
        char s[100005];
        ll n,m ;
        cin >> n ;
        // cin >> m ;
        // cin >> s ;
        ll arr[70], brr[n+13]; 
        loop(0,n,i) brr[i]=1000 ;

        arr[0]=1;
        // arr[1]=10;
        vec.pb(1);
        solve(arr, 1, 1);
        sort(all(vec));
        reverse(all(vec));
        vec.pb(1000000);

        // for(auto it: vec){
        //     if(n < it) continue ;
        //     else{
        //         while(n >= it){
        //             n -= it ;
        //             b++ ;
        //             vec1.pb(it);
        //         }
        //         if(n == 0 ) break ;
        //     }
        // }
        if(n != 1){
        brr[0]=0;
        brr[1]=1;
        brr[2]=2;
        loop(3,10,i) brr[i] = brr[i-1]+1;
        brr[10]=1;
        brr[11]=1;

        if(n >= 12)
        loop(12,n+1,i){
            for( auto it : vec){
                if(it <= i){
                    brr[i]= min(brr[i], brr[i-it]+1) ;
                    // cout << brr[i] << " ";
                }
            }
        }
        cout << brr[n] << endl ;

        for(auto it: vec){
            while( n >= it && brr[n-it] == brr[n]-1 && n >= 0){
                vec1.pb(it);
                n -= it ;
                // cout << it <<" " ;
            }
            if(n == 0) break ;
        }
        sort(all(vec1));
        // cout << brr[22] << " " << brr[55] ;
        // sort(all(vec1));
        for(auto it : vec1) cout << it << " " ;
        cout << endl ;
        }
        else{
            cout << 1 << endl ;
            cout << 1 << endl ;
        }

    // }
    return 0 ;
}

// g++ x.cpp -o as && ./as