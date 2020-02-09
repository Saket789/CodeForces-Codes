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
    cin >> t;
    while(t--){
        int n ;
         cin >> n ;
         int arr[n] ;
         loop(0,n) cin >> arr[i] ;
         int sum = 0, count = 0, c1=0 ;
         int ans=0;
         loop(0,n){
             sum += arr[i] ;
             if(arr[i] == 0) c1++ ;
         }
        //  cout << c1 << " " ;
        // if(sum >= 0 && c1 > 0){
        //     ans = c1 ;
        // }
        // else if(sum > 0 && c1 == 0){
        //     ans=0;
        // }
        // else if(sum < 0 && c1 == 0){
        //     ans = -sum+1;
        // }
        // else if(sum == 0 && c1==0){
        //     ans = 1 ;
        // }
        // else if(sum < 0 && c1 > 0){
        //     int p = abs(sum) ;
        //     if(p == c1) ans = p+1 ;
        //     else ans = c1;
        //     // ans = c1 ;
        // }

        if(sum > 0){
            if(c1 > 0 ) ans = c1 ;
        }
        else if(sum == 0){
            if(c1 > 0 ) ans = c1 ;
            else ans = 1 ;
        }
        else if(sum < 0){
            if(c1 != abs(sum)){
                ans=c1 ;
            }
            else ans=c1+1;
        }



        cout << ans << endl ;

    }



}