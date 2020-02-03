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
    int t ;
    cin >> t ;
    while(t--){
        int n ;
        string s ;
        cin >> n >> s ;
        long a=0, b=0 , ini= INT_MIN ,fin = INT_MIN ;

        if(n>1){
        for(int i=n-1; i>=0; i--){
            a = int(s[i]) - int('0') ;
        // cout << " cc0 " << a << " " ;
            if(a%2 == 1){ 
                ini = i ;
            break ;
            }
        }
        // cout << " aa " ;
        if(ini > 0)
        for(int i=ini-1; i>=0; i--){
            a = int(s[i]) - int('0') ;
        // cout << " bb0 " << a << " " ;
            if(a%2 == 1){ 
                fin = i ;
            break ;
            }
        }
        if(ini > 0 && fin >= 0)
        loop(fin,ini+1){
            cout << s[i] ;
        }
        else
            cout << -1 ;
        }
        else
        {
            cout << -1 ;
        }
        
        cout << endl ;
    }
}