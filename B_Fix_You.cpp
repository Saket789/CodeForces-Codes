
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
        cin >> m ;
        char arr[n][m];
        clr(arr);
        ll brr[n+1][m+1]; 
        loop(0,n,i){
            cin >> s ;
            loop(0,m,j){
                if(s[j]=='R')
                arr[i][j]='r';
                else
                arr[i][j]='d';
            }
        }
        clr(brr);
        loop(0,n,i){
            loop(0,m,j){
                if(i==0 && j == 0){
                    brr[i][j]=0;
                    continue;
                }
                // else if(i==n-1 && j==m-1){
                     
                // }
                else if(i==0 || j==0){
                    if(j==0){ if(arr[i-1][j]=='r')   brr[i][j]=1+brr[i-1][j];
                             else brr[i][j] = brr[i-1][j];
                    }
                    if(i==0){ if(arr[i][j-1]=='d')   brr[i][j]=1+brr[i][j-1];
                             else brr[i][j] = brr[i][j-1];
                    }
                }
                else{
                if(arr[i-1][j]=='r')  a=1+brr[i -1][j];
                else a = brr[i-1][j];
                if(arr[i][j-1]=='d')  b=1+brr[i][j-1];
                else b = brr[i][j-1];
                brr[i][j] = min(a,b);
                }
                // cout << arr[i][j ] << " ";
            }
            // out("")
        }
        loopr(n,0,i){
            loopr(m,0,j){
                if(i==n-1 && j==m-1) continue ;
                else if(i==n-1){
                    if(arr[i][j] != 'r'){
                         ans++;
                         arr[i][j] = 'r';
                    }
                }
                else if(j==m-1){
                    if(arr[i][j] != 'd'){
                         ans++;
                         arr[i][j] = 'd';
                    }
                    // if(brr[i-1][j] != brr[i][j]) ans++;
                }
                else{
                    // if(brr[i-1][j] != brr[i][j-1]) ans++;
                }
            }
        }
        cout << ans << endl ;
    }
    return 0 ;
}
// g++ x.cpp -o as && ./as                                      -