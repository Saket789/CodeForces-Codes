/**
**********************************************************************************************************************************************************************************************************************************
* @file:	B_Neighbor_Grid.cpp
* @author:	Saket vajpai
* @date:	2020年07月05日 00:00:28 Sunday
* @brief:	codeforces global round 9
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
// =================================
// =================================





int main(){
    fastio ;
    w(t)
    {
        ll a=0, b=0, c=0, d=0, e=0, p=0, q=0, r=0 ;
        ll ans=0, res=0, cnt=0, sum=0, diff=0, mul=1, val=0, k=0 ;
        // loop(0,n,i) brr[i]=0;
        // char s[100005];
        string s ;
        ll n,m ;
        cin >> n ;
        cin >> m ;
        // cin >> s ;
        ll arr[n+1][m+1], brr[n+1]; 
        loop(0,n,i)  loop(0,m,j)   cin >> arr[i][j] ;
        p=0;
        if(arr[0][0]>2 || arr[0][m-1]>2 || arr[n-1][0]>2 || arr[n-1][m-1]>2)    p=-1;
        loop(0,n,i){
            loop(0,m,j){
                if(i == 0 || j == 0){
                    if(arr[i][j] > 3) p=-1;
                    arr[i][j]=3;
                }
                else if(i==n-1 || j==m-1){
                    if(arr[i][j] > 3) p=-1;
                    arr[i][j]=3;
                }
                else{
                    if(arr[i][j]>4){
                        p=-1;
                    }
                    arr[i][j]=4;
                }
                // cout << p << " ";
            }
        }
        if(p==-1)   out("NO")
        else{
        out("YES")
        arr[0][0]=2;
        arr[0][m-1]=2;
        arr[n-1][0]=2;
        arr[n-1][m-1]=2;
        loop(0,n,i){ loop(0,m,j){
            cout << arr[i][j] <<" ";
            }
            out("")
        }
        }
    }
    return 0 ;
}

// g++ x.cpp -o as && ./as