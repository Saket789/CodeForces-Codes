#include <bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin >> t ;
    while(t--){
        long n; 
        cin >> n ;
        long num = (long)sqrt(n)+1 ;
        long a , b, c , pro, flag=0 ;
        for(long i=2; i<=num; i++){
            if(n%i == 0){
                a = n/i ;
                if(n%a == 0){   
                    for(int k=2; k<sqrt(a); k++){
                        if(a%k == 0){
                            c = a/k ;
                                a = k ;
                                b = i ;
                            if(a != b && b != c && a != c && a*b*c == n){
                                flag = 1 ;
                                break ;
                            }
                        }
                        if(flag == 1) break ;
                    }
                }
            }
                        if(flag == 1) break ;
        }
        if(flag == 1){
            cout << "YES" << endl ;
            cout << a <<" "<< b <<" " << c << endl  ;
        }
        else{
            cout << "NO" << endl ;
        }
    }
}