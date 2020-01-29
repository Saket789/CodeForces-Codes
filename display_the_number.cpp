#include <bits/stdc++.h>
#define ll long int
#define deb(x) cout << x << " " ;
#define endl '\n'
// #define vec vector<int> 
// #define pb push_back
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(x,n) for(int i=x; i<n; i++)
using namespace std ; 

string recur(string s, int n){

    // if(n == 4) return "1" ;
    if(n == 3) return "1" ;
    if(n == 2) return "1" ;
    if(n == 1) return "1" ;

    if(n%2 == 0){
        n /= 2;
        if(n%2 == 0){
        s = recur( s, n) ;
        string s1 = s+s ;
        return s1 ;
        }
        else{
        s = recur( s, (n-1)) ;
        string s1 = "1"+s+s ;
        return s1 ;
        }
    }
    else{
        n /= 2;
        // string s1 = recur( s, n) ;
        // s = "1" + s1 + s1 ;
        // // n /= 2;
        // return s ;
    if(n%2 == 0){
        s = recur( s, n) ;
        string s1 = s+s ;
        return s1 ;
        }
    else{
        s = recur( s, (n-1)) ;
        string s1 = "1"+s+s ;
        return s1 ;
        }
    }

}

int main(){
    fastio ;
    ll t ;
    cin >> t ;
    while(t--){
        ll n ;
        cin >> n ;
        long long int num = 1 , k = 1;

        string s="" ;
        if(n == 3) cout << 7 << endl ;
        else{
            if(n%2 == 0){
                string s1 = recur( s, n) ;
                cout << s1 << endl ;
            }
            else{
                // cout << " ch " ;
                n = n-3 ;
                // s += "7" ;
                cout << "7" ;
                string s1 = recur( s, n) ;
                cout << s1 << endl ;
            }
        } 
        
        
        }
    } 
