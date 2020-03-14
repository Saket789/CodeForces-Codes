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
        bool flag = true ;
        ll a=0, b=0, lcm ;
        while(flag){
            a++ ;   // hcf
            lcm = n-a ;
            for(long int i=1; i<=(ll)sqrt(lcm); i++){
                if(lcm%i == 0){
                    b = lcm/i ;
                    if(__gcd(i,b) == a){
                        flag=false ;
                        cout << i << " " << b << endl ;
                        break ;
                    }
                }
            }
        }            

    }
}