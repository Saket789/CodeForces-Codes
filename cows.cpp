#include <bits/stdc++.h>
#define ll long long int
#define deb(x) cout << x << " " ;
#define endl '\n'
#define vec vector<int> 
#define pb push_back
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(x,n,v) for(int v=x; v<n; v++)
using namespace std ; 

int main(){
    fastio ;
    int t ;
    cin >> t ;
    while(t--){

    ll n, x ;
    cin >> n >> x ;
    ll a[n] ;
    loop(0,n,i) cin >> a[i] ;
    sort(a,a+n) ;
    ll ans=0, div=0 , p=0;

    loop(0,n,i){
        if(x == a[i]){
            p=1 ;
            ans = 1 ;
        } 
    }

    if(p == 0){
    // for(int i=n-1; i>=0; i--){
        div = x/a[n-1] ;
        if(a[n-1]>x) div++;
        if(x%a[n-1] == 0){
            ans = div ;
        }
        else{
            ans = div+1 ;
        }
    }
    // }
        cout << ans << endl ;
    }
}