#include <bits/stdc++.h>
#define ll unsigned long long int
#define deb(x) cout << x << " " ;
#define endl '\n'
// #define vec vector<int> 
// #define pb push_back
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(x,n) for(int i=x; i<n; i++)
using namespace std ; 




int main(){
    fastio ;
    int t ;
    cin >> t ;
    while(t--){
        ll n , g, b ;
        cin >> n >> g >> b ;
        ll mid = n/2 ;
        if(n%2 == 1) mid += 1 ;
        ll ans=0 ;

        if(g >= b){
            ans = n ;
        }
        else{
            ll time = mid/g ;
            if(mid%g == 0){
                // time += 1 ;
            ans = g*time + (time-1)*b ;
            if(ans < n){
                ans = g*time + time*b ;
            }
            }
            else{
            ans = g*time + (time)*b + mid%g ;

            }
            // cout << time << " " ;
        }

        cout << ans << endl ;

    }
}