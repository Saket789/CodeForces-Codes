#include <bits/stdc++.h>
using namespace std ;
#define ll long  int 
#define loop(a,n) for(int i=a; i<n; i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
#define deb(x) cout << x << " " ;

int main(){
    int t ;
    cin >> t ;
    while(t--){
        ll a , c, b, ans , res = 0;
        cin >> a >> c ;
        b = (ll)sqrt(c) ;
        long double d = (long double)c ; 
        loop(0,b+1){
            // cout << d/(i+1) << " dfd "  << ceil(78393728.6) << " ";
            ans = i + ceil(d/(i+1)) ; 
            if(ans <= a){
                res = 1 ;
                break ;
            }
        }
        if(res == 1) cout << "YES" << endl ;
        else cout << "NO" << endl ;
    }       
}
