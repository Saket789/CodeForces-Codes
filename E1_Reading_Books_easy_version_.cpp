
#include <bits/stdc++.h>
using namespace std ; 
#define ll              int
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
    // w(t)
    // {
        ll a=0, b=0, c=0, d=0, e=0, p=0, q=0, r=0 ;
        ll ans=0, res=0, cnt=0, sum=0, diff=0, mul=1, val=0, k=0 ;
        // loop(0,n,i) brr[i]=0;
        // char s[100005];
        string s ;
        ll n,m ;
        cin >> n ;
        cin >> k ;
        m=k;
        // cin >> s ;
        // ll arr[n+1], brr[n+1]; 
        // loop(0,n,i) cin >> arr[i] ;
        vi v1, v2, v3 ;
        loop(0,n,i){
            cin >> a >> b >> c ;
            if(b==1)    p++;
            if(c==1)    q++;
            if(b==1 && c==1){
                v1.pb(a);
            }
            else if(b==1){
                v2.pb(a);
            }
            else if(c==1){
                v3.pb(a);
            }
        }
        if((p) < m || q < m){
            out(-1)
            // continue;
        }
        else{
            sort(all(v1));
            sort(all(v2));
            sort(all(v3));
            // int i=0, j=0, k=0; 
            int n1=v1.size();
            int n2=v2.size();
            int n3=v3.size();
            a=0, b=0;
            
	        int books = 0;
	        int i = 0, j = 0;

	        while (books < k && i < min(v2.size(), v3.size()) && j < v1.size())
	        	if (v1[j] < v2[i] + v3[i])
	        		ans += v1[j], j++, books++;
	        	else
	        		ans += v2[i] + v3[i], i++, books++;

	        while (j < v1.size() && books < k)
	        	ans += v1[j++], books++;

	        while (i < min(v2.size(), v3.size()) && books < k)
	        	ans += v2[i] + v3[i], i++, books++;
            out(ans)
        }
    return 0 ;
}

// g++ x.cpp -o as && ./as