
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
    int t ;
    cin >> t ;
    while(t--){

        ll n, k;
        cin >> n  >> k ;
          
       if(n == 2){
           cout  << "NO" ;
       }    
       else if(n == 1 && k > 1){
           cout  << "NO" ;
       }
       else if(n < k*k ){
           cout  << "NO" ;
       }
        else{
            if(n%2 && k%2){
           cout  << "YES" ;
            }
            else if(n%2 == 0 && k%2 == 0){
           cout  << "YES" ;
            }
            else
            {
           cout  << "NO" ;
                /* code */
            }
            
        }


        cout << endl ;
    }
}