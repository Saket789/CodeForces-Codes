#include <bits/stdc++.h>
using namespace std ;
#define ll long long int

ll lcm(ll a, ll b){
    return a / __gcd(a, b) * b;
}

int main(){
    long long int n ;
    cin >> n ;
    float q = sqrt(n) ;
    long long int p = int(q)  , ans=0 , x=n ;

    for(ll i = 1 ; i * i <= x ; i++){
        if(x % i == 0 && lcm(i, x / i) == x){
            ans = i;
        }
    }

    cout << ans << " " << x / ans << endl;

    // int i = 0 ;
    // if(n == 1) cout << 1 << " " << 1 ;
    // else
    // for( i=p; i>=1; i-- ){
    //     int a = n%i ;
    //     int b = n/i ;

    //     int gcd = __gcd( i, b) ;
    //     if(i*b/gcd != n)
    //         continue ;

    //     if(a == 0 && b != i)
    //     {
    //         int r = min(i,b);
    //         int q = max(i,b);
    //         cout << r << " " << q ;
    //         break ;
    //     }
    // }
}