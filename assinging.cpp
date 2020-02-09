#include <bits/stdc++.h>
#define ll long int
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
        ll n ;
        cin >> n ;
        ll arr[2*n] ;
        loop(0,2*n) cin >> arr[i] ;

        sort(arr, arr+2*n) ;

        ll ans = abs(arr[n]-arr[n-1]) ;

        cout << ans << endl ;

    }

}