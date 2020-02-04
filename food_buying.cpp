#include <bits/stdc++.h>
#define ll long long int
#define deb(x) cout << x << " " ;
#define endl '\n'
// #define vec vector<int> 
// #define pb push_back
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(x,n) for(int i=x; i<n; i++)
using namespace std ; 

int main(){
    fastio ;
    ll t;
    cin >> t ;
    while(t--){
        ll n ;
        cin >> n ;
        ll p=0, q=0, ans=0 , r=0;

        if(n>9){
        while(n >= 10){
            q = n ;
            p = p + n-n%10 ;
            n = n/10 + q%10 ;
        }
        p = p + n ;
        cout << p << endl ;
        }
        else{
            cout << n << endl ;
        }
    }
}