#include <bits/stdc++.h>
using namespace std ;
#define si (int)1e6 ; 
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

int main(){
    fastio ;
    int n ;
    cin >> n ;
    setprecision(12) ;
    double a=0 , b=1, k=0.0 ;
    int i=1, j=0 , l=0;
    
    for(int i=1; i<=n; i++){
        a = a + 1.0/i ;
    }

    printf("%.12f",a) ; 





    // a = (double)(n-1.0)/n ;
    // cout << b+a << endl ;  
    // cout << setprecision(13) << b+a << " ";
}