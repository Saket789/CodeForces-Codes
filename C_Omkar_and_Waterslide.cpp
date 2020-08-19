
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
        // cin >> s ;
        ll arr[n+1], brr[n+1], crr[n+1]; 
        loop(0,n,i) cin >> arr[i] ;
        clr(brr);   clr(crr);
        a = *max_element(arr,arr+n);
        sett st;
        mapp mp;
        // brr[0]=arr[0];
        // if(arr[1] > arr[0]) brr[0]=101001;
        // loop(1,n,i)    if(arr[i-1] <= arr[i])  brr[i]=0; else brr[i] = arr[i-1]-arr[i];
        // crr[n-1] = arr[n-1];
        // if(arr[n-1] > arr[n-2]) crr[n-1]=101010;
        // loopr(n-1,0,i)    if(arr[i+1] >= arr[i])  crr[i]=0; else crr[i] = arr[i]-arr[i+1];
        // loop(1,n,i){
        //     // cout << brr[i] <<" "<<crr[i] <<"   ";
        //     ans += min(brr[i-1],crr[i]);
        // }
        brr[0]=0;
        loop(1,n,i)   if(arr[i] < arr[i-1])  brr[i] = abs(arr[i]-arr[i-1]);
        crr[0]=0;
        loopr(n,1,i)    if(arr[i] < arr[i-1])  crr[i] = abs(arr[i]-arr[i-1]);
        loop(1,n,i){
            // cout << brr[i] << " " << crr[i]  << "   ";
            ans += min(brr[i],crr[i]);
        }
        out(ans)
    }
    return 0 ;
}
// g++ x.cpp -o as && ./as
        // loop(1,n,i){
        //     if(arr[i] < arr[i-1]){
        //         b = arr[i-1];
        //         c = b-arr[i];
        //         while(i<n && arr[i] < b){
        //             c = max(c,b-arr[i]);
        //             // st.p
        //             i++;
        //         }
        //         ans += c ;
        //     }
        // }