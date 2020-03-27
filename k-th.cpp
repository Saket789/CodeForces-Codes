
#include <bits/stdc++.h>
#define ll long long int
#define deb(x) cout << x << " " ;
#define endl '\n'
#define pb push_back
#define mk make_pair
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(x,n,v) for(ll v=x; v<n; v++)
    // vector<pair<int,int>> vec ;
// map<long,long> mp ; 
// set<long> st ; 
using namespace std ; 

int main(){
    fastio ;
    int t ;
    cin >> t ;
        ll arr[100003] ;
        arr[0]=0;
        arr[1]=1;
        loop(2,100003,i){
           arr[i] = (i*(i+1))/2 ;
        //    cout << arr[i] << " " ;
        }
    while(t--){

       ll m ,n ;
       cin >> m >> n ;

        int c=0, d=0, ans=0, e=0, i=1 ;
        string s = "" ;

        while(arr[i] <= n ){
            c=i ;
            i++ ;
        }
            int j=0 ;
        if(arr[i-1] == n){
            d = (i) ;
            e =  i-1 ;
        }
        else{
            d = (i+1) ;
            e = (n-arr[i-1]) ;
        }
        // cout << d <<  " " << e << endl; 

        for(int i=m; i>=1; i--){
            if(i == d || i == e){
                s += 'b' ;
            }
            else s += 'a' ;
        }
        cout << s << endl ;
    }
}