
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
// int dp[1000][1000] ;
ll mpow(ll base, ll exp); 
// =================================
// =================================





int main(){
    fastio ;
    w(t)
    {
        ll a=0, b=0, c=0, d=0, e=0, p=0, q=0, r=0 ;
        ll ans=0, res=0, cnt=0, sum=0, diff=0, mul=1, val=0 ;
        // char s[100005];
        string s ;
        ll n=0,m=0,k=0 ;
        cin >> n ;
        // cin >> m ;
        cin >> s ;
        // ll arr[n+1], brr[n+1]; 
            // if(s[0] == 'L' && s[1] =='L' && s[n-1]=='L'){
            //         ans++;
            //         s[0] = 'R';
            // }
            // if(s[0] == 'R' && s[1] =='R' && s[n-1]=='R'){
            //         ans++;
            //         s[0] = 'L';
            // }
            p=1;
        loop(0,n,i){
            if(i < n-2){
                if(s[i] == 'R' && s[i+2]=='R'){
                    if(s[i+1] == 'R'){
                        ans++;
                        i++;
                        if(i == n-1)  p=5;
                    }
                }
                else if(s[i] == 'L' && s[i+2]=='L'){
                    if(s[i+1] == 'L'){
                        ans++;
                        i++;
                        if(i == n-1)  p=5;
                    }
                }
            }
            if(p==1 && i==n-1){
            if(s[0] == 'L' && s[1] =='L' && s[n-1]=='L'){
                    ans++;
                    s[0] = 'R';
            }
            if(s[0] == 'R' && s[1] =='R' && s[n-1]=='R'){
                    ans++;
                    s[0] = 'L';
            }
            break;
            }
        }
        out(ans)
    }
    return 0 ;
}
// g++ x.cpp -o as && ./as