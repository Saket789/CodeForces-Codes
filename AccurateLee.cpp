/**
**********************************************************************************************************************************************************************************************************************************
* @file:	AccurateLee.cpp
* @author:	Saket
* @date:	2020年06月23日 21:41:46 Tuesday
* @brief:	Codeforces 652 div-2 B
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
        string s, s1="" ;
        ll n,m ;
        cin >> n ;
        // cin >> m ;
        cin >> s ;
        // ll arr[n+1], brr[n+1]; 
        // loop(0,n,i) cin >> arr[i] ;
        // ll size=s.length();
        ll i=n-1;
        while(i>=0 && s[i]=='1'){
            s1 = s1 + s[i];
            i--;
        }
        string s2="", s3="";
        while(i>=0 && s[i]=='0'){
            s2 = s2 + s[i];
            i--;
        }
            // deb(i)
        ll j=0;
        while(i>=j && s[j]=='0'){
            s3 = s3 + s[j];
            j++;
        }
        if(i < 0)
        out(s3+s2+s1)
        else out(s3+'0'+s1)
    }
    return 0 ;
}

// g++ x.cpp -o as && ./as