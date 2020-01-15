#include <bits/stdc++.h>
using namespace std ;
#define ll long 
#define loop(a,n) for(long int i=a; i<n; i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
#define deb(x) cout << x << " " ;

int main(){
    long int t ;
    cin >> t ;
    while(t--){
        long long int a ;
        string b ;
        cin >> a ;
        cin >> b ;
        long long int len  = b.length() , p = 1 ;
        for(long long int i=0 ; i<b.length(); i++){
            if(b[i] == '9') continue ;
            else {
                p=0;
                break ;
            }
        }
        long long int ans ;
        if(p == 0) ans = a*len - a ;
        else ans = a*(len) ;
        cout << ans << endl ;
        }       
}
