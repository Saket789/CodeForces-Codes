
#include <bits/stdc++.h>
#define ll long long int
#define deb(x) cout << x << " " ;
#define endl '\n'
#define pb push_back
#define mk make_pair
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(x,n,v) for(int v=x; v<n; v++)
    // vector<pair<int,int>> vec ;
// map<long,long> mp ; 
// set<long> st ; 
using namespace std ; 
 
int main(){
    fastio ;
    int n, m, k;
    cin >> n >> m >> k;
    //We can move to 0,0 in atmost nm steps
    // then vist every cell in nm - 1 steps
    //using snake move up-> down->up
    for(int i = 0, x1, y1; i < k; ++i){
        cin >> x1 >> y1;
    }
    for(int i = 0, x1, y1; i < k; ++i){
        cin >> x1 >> y1;
    }
    int ans = 0;
    string res;
    for(int i  = 1; i <= n - 1; ++i){
        res += "U"; ans++;
    }
    for(int i = 1; i <= m - 1; ++i){
        res += "L"; ans++;
    }
    for(int i = 1; i <= m; ++i){
        if( i & 1 ){
            //traverse down
            for(int j = 1; j < n; ++j){
                res += "D"; ans++;
            }
            if(i < m) res += "R", ans++;
        } else {
            for(int j = n; j > 1; --j){
                res += "U"; ans++;
            }
            if(i < m) res += "R", ans++;
        }
    }
    cout << ans << '\n';
    cout << res << '\n';
   
    
}