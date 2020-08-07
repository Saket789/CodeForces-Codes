
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
    // w(t)
    // {
        ll a=0, b=0, c=0, d=0, e=0, p=0, q=0, r=0 ;
        ll ans=0, res=0, cnt=0, sum=0, diff=0, mul=1, val=0 ;
        // char s[100005];
        string s ;
        ll n,m,k ;
        cin >> n ;
        // cin >> s ;
        ll arr[n+1], brr[n+1]; 
        sett st ;
        sett q1, q2, q3, q4 , q5;
        loop(0,n,i){
             cin >> arr[i] ;
             st.insert(arr[i]);
        }
        mapp mp ;
        loop(0,n,i) mp[arr[i]]++ ;
        loop(0,n,i)
            if(mp[arr[i]] >= 8) q5.insert(arr[i]);
            else if(mp[arr[i]] >= 6) q1.insert(arr[i]);
            else if(mp[arr[i]] >= 4) q2.insert(arr[i]);
            else if(mp[arr[i]] >= 2)  q3.insert(arr[i]);
            else q4.insert(arr[i]);
        cin >> m ;
        // for(auto qq : q1) cout << qq << " " ;
        while(m--){
            char ss ;
            cin >> ss >> a ;
            if(ss == '+'){
                auto r1 = q1.find(a);
                auto r2 = q2.find(a);
                auto r3 = q3.find(a);
                auto r4 = q4.find(a);
                auto r5 = q5.find(a);
                if(r1 != q1.end()){
                    if(mp[a] == 7){
                        q1.erase(a);
                        q5.insert(a);
                    }
                }
                else if(r2 != q2.end()){
                    if(mp[a] == 5){
                        q2.erase(a);
                        q1.insert(a);
                    }
                }
                else if(r3 != q3.end()){
                    if(mp[a] == 3){
                        q3.erase(a);
                        q2.insert(a);
                    }
                }
                else if(r4 != q4.end()){
                    if(mp[a] == 1){
                        q4.erase(a);
                        q3.insert(a);
                    }
                }
                else if(r5 == q5.end()){
                    // mp[a]++;
                    q4.insert(a);
                }
                mp[a]++;
                if( (q5.size()>=1) || (q1.size() >= 2) || (q1.size()==1 && (q2.size()>=1 || q3.size()>=1)) || (q2.size()==1 && q3.size()>=2) || (q2.size() >= 2))
                    cout << "YES" << endl ;
                else 
                    cout << "NO" << endl ;
            }
            else{
                auto r1 = q1.find(a);
                auto r2 = q2.find(a);
                auto r3 = q3.find(a);
                auto r4 = q4.find(a);
                auto r5 = q5.find(a);
                if(r5 != q5.end()){
                    if(mp[a] == 8){
                        q5.erase(a);
                        q1.insert(a);
                    }
                }
                if(r1 != q1.end()){
                    if(mp[a] == 6){
                        q1.erase(a);
                        q2.insert(a);
                    }
                }
                if(r2 != q2.end()){
                    if(mp[a] == 4){
                        q2.erase(a);
                        q3.insert(a);
                    }
                }
                if(r3 != q3.end()){
                    if(mp[a] == 2){
                        q3.erase(a);
                        q4.insert(a);
                    }
                }
                mp[a]--;
                if( (q5.size()>=1) ||(q1.size() >= 2) || (q1.size()==1 && (q2.size()>=1 || q3.size()>=1)) || (q2.size()==1 && q3.size()>=2) || (q2.size() >= 2) )
                    cout << "YES" << endl ;
                else 
                    cout << "NO" << endl ;

            }
        }
        
    // }
    return 0 ;
}
// g++ x.cpp -o as && ./as