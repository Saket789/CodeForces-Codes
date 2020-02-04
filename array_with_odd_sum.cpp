#include <bits/stdc++.h>
#define ll long long int
#define deb(x) cout << x << " " ;
#define endl '\n'
// #define vec vector<int> 
// #define pb push_back
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(x,n,i) for(int i=x; i<n; i++)
using namespace std ; 

int main(){
    fastio ;
    int t ;
    cin >> t ;
    while(t--){
        int n , q=0;
        cin >> n ;
        int arr[n] ;
        int odd=0, even=0 ;
        loop(0,n,i){
            cin >> arr[i] ;
            if(arr[i]%2 == 0) even++ ;
            else odd++ ;
        }
        if(even >= 1 && odd >= 1){
            cout << "YES\n" ;
        }
        else if(even==0 && odd >= 1){
            if(odd % 2 == 0) cout << "NO\n" ;
            else cout << "YES\n" ;
        }
        else{
            cout << "NO\n" ;
        }



    }



}