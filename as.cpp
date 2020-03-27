
#include <bits/stdc++.h>
#define ll long long int
#define deb(x) cout << x << " " ;
#define endl '\n'
#define pb push_back
#define mk make_pair
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(x,n,v) for(ll v=x; v<n; v++)
    // vector<pair<int,int>> vec ;
// map<long,long> mp ; 
// set<long> st ; 
using namespace std ; 
int dp[1000][1000] ;

int main(){
    fastio ;
    int t ;
    cin >> t ;
    while(t--){

        ll a, b , ans, c ,d;
        cin >> a >> b ;
        if(a >= b && a%b == 0){
            ans = 0 ;
        }
        else if(a >= b){
            c = a%b ;
            ans = b - c ;
            // ans = b*(c+1) - b*c ;
            // if(ans < b/2) ans = b-ans ;
        }
        else ans = b-a ;
        cout << ans << endl ;
    }
}