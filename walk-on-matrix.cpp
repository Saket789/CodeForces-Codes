
#include <bits/stdc++.h>
#define ll long long int
#define deb(x) cout << x << " " ;
#define endl '\n'
#define pb push_back
#define mk make_pair
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(x,n,v) for(ll v=x; v<=n; v++)
// vector<pair<int,int>> vec ;
// vector<pair<int,int>>::iterator itr, itr1 ;
// map<long,long> mp ; 
// set<long> st ; 
using namespace std ; 
int dp[1000][1000] ;


int main(){
    fastio ;
    ll n ;
    cin >> n ;

    if(n == 0){
        cout << 1 << " "<< 1 << endl;
        cout << 4 << endl ;
    }
    // else if(n == 1){
    //     cout << 2 << " "<< 2 << endl;
    //     cout << 3 << " "<< 2 << endl ;
    //     cout << 3 << " "<< 3 << endl ;
    // }
    else{
        cout << 3 << " "<< 3 << endl;
        ll a=1, b , c ;
        while(a <= n){
            a *= 2 ;
        }
        b=a;
        b *= 2 ; 
        b--;
        c = n ;
        c = (c&(-c)) ;

        cout << b << " " << a-1 << " " << a-1 << endl;
        cout << a << " " << a-1 << " " << 0 << endl;
        cout << b << " " << b << " " << n << endl;

    }

}




// 7 3 3 1
// 4 0 3 2
// 4 4 4 2




        // ll n, m;
        // cin >> n >> m ;
        // ll arr[n+1][m+1] ;
        // loop(0,n,i) loop(0,m,j) arr[i][j]=0 ;   
        // loop(0,n,i) loop(0,m,j) dp[i][j]=0 ;   
        // loop(1,n,i) loop(1,m,j) cin >> arr[i][j] ;   

        // dp[0][1] = arr[1][1] ;

        // loop(1,n,i){
        //     loop(1,m,j){
        //         dp[i][j] = max(dp[i-1][j]&arr[i][j] , dp[i][j-1]&arr[i][j]) ;
        //         cout << dp[i][j] << " " ;
        //     }
        //     cout << endl ;
        // }