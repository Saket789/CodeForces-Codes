#include <bits/stdc++.h>
#define ll long long int
#define deb(x) cout << x << " " ;
#define endl '\n'
#define vec vector<int> 
#define pb push_back
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

    int arr[3] ;
    cin >> arr[0] >> arr[1] >> arr[2] ;
    sort(arr,arr+3) ;
    int ans=0;

    if(arr[0]==0 && arr[1]==0 && arr[2]==0){
        ans=0;
    }
    else if(arr[0]==1 && arr[1]==1 && arr[2]==1){
        ans=3;
    }
    else if(arr[0]==0 && arr[1]==0 && arr[2]==1){
        ans=1;
    }
    else if(arr[0]==0 && arr[1]==1 && arr[2]==1){
        ans=2;
    }
    else if(arr[0]==0 && arr[1]==0 && arr[2]==2){
        ans=1;
    }
    else if(arr[0]==0 && arr[1]==0 && arr[2]==3){
        ans=1;
    }       
    else if(arr[2] > 1 && arr[1] >= 1){
        arr[2]--; arr[1]--;
        ans++;
        if(arr[2]>0){
            ans++;
            arr[2]--;
        }
        if(arr[1]>0){
            ans++;
            arr[1]--;
        }
        if(arr[0]>0){
            ans++;
            arr[0]--;
        }
        if(arr[2]>=1 && arr[0]>=1){
        arr[2]--; arr[0]--;
        ans++;
        }
        if(arr[1]>=1 && arr[0]>=1){
        arr[1]--; arr[0]--;
        ans++;
        }
        if(arr[2]>0 && arr[1]>0 && arr[0]>0 ){
            ans++;
        }
    }
    else if(arr[2] > 0){
        ans=1;
    }
    cout << ans << endl ;
    }
}