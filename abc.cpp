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

        string a , b , c ;
        cin >> a >> b >> c ;

        int len = a.length(), p=0 ;

        loop(0,len,i){
            if((a[i]==c[i] || b[i]==c[i]) && a[i]!=b[i]){
                p=1 ;   
                // break ;
                if(a[i] == c[i]){
                    b[i] = c[i] ;
                }
                if(b[i] == c[i]){
                    a[i] = c[i] ;
                } 
            }
            else{
                a[i] = c[i] ;
            }
            // else{ p=0 ;}
        }
        if(a == b) cout << "YES" << endl ;
        else cout << "NO" <<endl ;

    }
}