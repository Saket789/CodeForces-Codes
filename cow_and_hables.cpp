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

    int n , d ;
    cin >> n >> d ;
    int arr[n] ;
    loop(0,n,i) cin >> arr[i] ;
    int a=0 ,b=0 , c=0, total=arr[0], ans = 0 ;
    int sum=0, diff=0, i=1 ; 

    while(d>0 && n>1){
        if(arr[i]*i < d){
            d = d - arr[i]*i ;
            total += arr[i] ;
        }
        else{
            c = d/i ;
            total += c ;
            d=0;
        }
        i++;
        if(i == n) break ;
    }

    cout << total << endl ;
    }
}