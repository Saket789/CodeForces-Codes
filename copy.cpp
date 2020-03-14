#include <bits/stdc++.h>
#define ll long int
#define deb(x) cout << x << " " ;
#define endl '\n'
#define vec vector<int> 
#define pb push_back
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(x,n,v) for(int v=x; v<n; v++)
// map<long,long> mp ; 
// set<long> st ; 
using namespace std ; 

int main(){
    fastio ;
    int t ;
    cin >> t ;
    while(t--){

        ll n ;
        cin >> n ;
        // ll arr[n] ;
        // loop(0,n,i) cin >> arr[i] ;
        vector<int> v ;
        ll a=0,b=0 ;
        // bool v1[1000000000] ;
        map<ll,ll> mp ;
        map<ll,ll>::iterator itr, itr1 ;
        // loop(0,n,i) 
        loop(0,n,i){
            cin >> a ;
            itr = mp.find(a) ;
            if(itr == mp.end()){
                // v.pb(a) ;
                mp[a]++ ;
                b++ ;
            }
        }
        cout << b << endl ;
    }
}