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

        int n ;
        cin >> n ;
        ll arr[n] ;
        loop(0,n,i) cin >> arr[i] ;

        ll diff, mindiff=1000000000, d1=0, num, maxx=0 , d2 = 1000000000 ,d3, min = INT_MAX;

        loop(0,n,i) if(maxx < arr[i]) maxx = arr[i] ;
        loop(0,n,i){
               if(min > arr[i] && arr[i] > -1) min = arr[i] ;
        }
        // loop(0,n,i){
        //     if(i == 0 && arr[i] == -1){
        //         if(arr[i+1] > -1)
        //     }
        // }

        // loop(1,n,i){
        //     if(arr[i] == -1 || arr[i-1] == -1) continue ;
        //     else
        //         d3 = abs(arr[i]-arr[i-1]) ;
        //         if(d3 < d2 ) d2 = d3 ; 
        // }

        // cout << d2 << " <---d2          ";

        ll start=min, end=maxx, mid=0 , ans=0, ans1= 0;

        while(start <= end){
            mid = (start+end)/2 ;
            // cout << " mid-->" << mid << " " ;
            d1=0;
            loop(1,n,i){
                if(arr[i] == -1 && arr[i-1] == -1){
                    continue ;
                }
                if(arr[i] == -1){
                    diff = abs(mid - arr[i-1]) ;
                }
                else if(arr[i-1] == -1){
                    diff = abs(mid - arr[i]) ;
                }
                else{
                    diff = abs(arr[i] - arr[i-1]) ;
                }
                if(d1 < diff) d1 = diff ;
            }
            // cout << "  d1 -->" <<  d1  ;
            // if(mindiff > d1) mindiff = d1 ;
            if(d2 >= d1) start= mid+1 ;
            else end = mid ;
            if(d2 >= d1){
                ans = d1 ;
                d2 = d1 ;
                ans1 = mid ;
                // cout << d2 << " * " ;
                // break ;
            }
            if(start == end) break ;
        }
        cout <<  ans << " "<< ans1 <<  endl ;

    }
}
