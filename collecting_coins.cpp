#include <bits/stdc++.h>
using namespace std ;
vector<pair < float, int> > v ; 

int main(){
    int t ;
    cin >> t ;
    while(t--){
        long a1 , b, c , d, e=3 ;
        long a[3] ;
        cin >> a[0] >> a[1] >> a[2] >> d ;
        sort(a,a+3) ;
        long diff = a[2]*2 - a[0] - a[1] ;
        long sum = d - diff ;
        long gcd1 = __gcd( sum, e) ;
        if(sum >=0){
        if(gcd1 == 1) cout << "NO" << endl ;
        else cout << "YES" << endl ;
        }
        else{
            cout << "NO" << endl ;
        }
    }
}