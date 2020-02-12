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
    cin >> t ;
    while(t--){
        string s ;
        cin >> s ;
        int n = s.length() ;
        int cnt=0, cnt1 =0 ;
        // loop(0,n){
            // deb("ds" );`
        // }
        int i=0;
        while(i < n){
            if(s[i] == '1') break ;
            i++;
        }
        int j=n-1 ;
        while(j >= 0){
            if(s[j] == '1') break ;
            j--;
                // deb("FDdsg");
        }
        // cout << i << "  df " << j ;
        if( i < n ){
        if(i == n-1 && j == 0){
            cnt=0;
                // deb("FDdsg");
        }
        // else if(i==0 && j==n-1){
        //     cnt=0;
        //         // deb("FDdsg");
        // }
        else if(i == j){
            cnt=0;
                // deb("FD");
        }
        else{
            while(i <= j){
                if(s[i] == '0') cnt++ ;
                i++;
                // deb("FD");
            }
        }
        }
        cout << cnt << endl ;
    }

}