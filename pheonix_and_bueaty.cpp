
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






int main(){
    fastio ;

    w(t)
    {
        ll a=0, b=0, c=0, d=0, e=0, p=0, q=0, r=0 ;
        ll ans=0, res=0, cnt=0, sum=0, diff=0, mul=1 ;
        // loop(0,n,i) arr[i]=0;
        // loop(0,n,i) brr[i]=0;
        char s[100005];
        ll n,m ;
        cin >> n ;
        cin >> m ;
        // cin >> s ;
        ll arr[n], brr[n]; 
        vi vec ;
        mapp mp , mp1;
        mp1.clear();
        loop(0,n,i){
            cin >> arr[i] ;
            mp1[arr[i]]++;
            if(mp[arr[i]] != 10){
                mp[arr[i]]=10 ;
                a++;
            }
        }

        ll maxx = *max_element(arr,arr+n); 
        ll minn = *min_element(arr,arr+n); 
        
        loop(0,n-m+1,i){
            sum=0;
            loop(i,m+i,j){
                sum += arr[j];
            }
            if(ans == 0)
                ans=sum;
            if(ans != 0) 
            if(ans != sum) {
                p=1;                        // not buitiful
                break;
            }
            // cout << "sum->" << sum ;
        }
        ans=0 ;
        loop(1,n,i){
            ll o=1;
            while(arr[i] == arr[i-1]) { i++;    o++; } 
            cnt = max(cnt,o);
        }

        if(a > m){
            cout << -1 << endl ;
        }
        else if(p==1){
            // deb("asf");
            loop(0,101,i) res = max( res, mp1[i] );
            loop(0,n,i){
                auto itr = find(vec.begin(), vec.end(), arr[i]);
                if(itr == vec.end()){
                    vec.pb(arr[i]);
                }
            }
            // loop(1,m+1,i){
            //     auto itr = find(vec.begin(), vec.end(), i);
            //     if(itr == vec.end()){
            //         vec.pb(i);
            //     }
            // }
            sort(all(vec));
            ll size=vec.size();
            ll pq = m-size ;
            loop(0,pq,i) vec.pb(1);
            res = max(res,cnt);
            ans = size*m ;
            p=0;
            // loop(0,res,i){
            // while(p < n){
            //     // loop(1,m+1,i) cout << 
            //     for(auto it : vec){
            //         if(it == arr[p]){
            //         //  cout << it << " ";
            //          p++;
            //         }
            //         // else
            //         //  cout << it << " ";
            //     }
            //         q++;
            // }
            ans = m*n;
            cout << ans << endl;
            // loop(0,res,i){
            p=0;
            while(p < n){
                // loop(1,m+1,i) cout << 
                for(auto it : vec){
                     cout << it << " ";
                }
                p++;
            }
            cout << endl ;
        }
        else{
            cout << n << endl ;
            loop(0,n,i) cout << arr[i] << " ";
            cout << endl ;
        }





    }
    return 0 ;
}

// g++ x.cpp -o as && ./as