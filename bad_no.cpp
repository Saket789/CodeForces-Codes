/**
**********************************************************************************************************************************************************************************************************************************
* @file:	bad_no.cpp
* @author:	
* @date:	2020年03月19日 20:12:11 Thursday
* @brief:	
**********************************************************************************************************************************************************************************************************************************
**/

#include <bits/stdc++.h>
#define ll long long int
#define deb(x) cout << x << " " ;
#define endl '\n'
// #define vec vector<int> 
#define pb push_back
#define mk make_pair
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(x,n,v) for(int v=x; v<n; v++)
// map<long,long> mp ; 
// set<long> st ; 
using namespace std ; 

int main(){
    fastio ;
    int t ;
    cin >> t ;
    while(t--){

        int n ;
        cin >> n ;

        if(n == 1) cout << -1 << endl ;
        else{
            cout << "2" ;
            loop(1,n,i) cout << "3" ;
        }
        cout << endl ;
        // if(f == 1) cout << e << endl ;
    }
}


        // loop(1,n,i) a = a*10 ;
        // if(a < 1) a=1 ;
        // loop(a,a*10,i){
        //     int p=i ;
        //     c=0 ;
        //     while(p){
        //         b = p%10 ;
        //         p /= 10 ;
        //         if(b == 0){
        //             c=1;
        //             break ;
        //         }
        //     }
        //         if(c == 1)  continue ;
        //     p=i ;
        //     d=0 ;
        //     while(p){
        //         b = p%10 ;
        //         p /= 10 ;
        //         if(i%b == 0){
        //             d=1;
        //             break ;
        //         }
        //     }
        //     if(d == 1) continue ;
        //     else{
        //         e = i ;
        //         f=1;
        //         break ;
        //     }
        // }