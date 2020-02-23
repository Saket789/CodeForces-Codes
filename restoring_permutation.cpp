#include <bits/stdc++.h>
#define ll long long int
#define deb(x) cout << x << " " ;
#define endl '\n'
// #define vec vector<int> 
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

        int n;
        cin >> n ;
        int a[n], b[n];
        vector<int> vec;
        vector<int>::iterator itr, itr1 ;
        map<int,int> mp ;
        loop(0,2*n,i) mp[i+1]++ ;
        int p=0, q=0 ;

        loop(0,n,i){
             cin >> p;
             a[i]=p;
            mp[a[i]]--;
        }
        // loop(1,2*n,i) cout << mp[i] << "  " ;
            loop(0,n,i) b[i] = a[i] ;

        sort( a, a+n);
        int idx=0 , r=0, s=0;
        loop(0,n,i){
            p = b[i];
            idx=i;
            r=1;
            vec.pb(b[i]) ;
            while(true){
                q = b[idx] + r++ ;
                if(q > 2*n) {
                    s=1;
                    break ;
                }
                if(mp[q] == 0){
                    // r++ ;
                    continue ;
                } 
                else{
                    vec.pb(q);
                    mp[q]--;
                    break ;
                }
            }
            if(s==1) break ;
        }

        if(s==1) cout << -1 << endl ;
        else{
            for(itr = vec.begin(); itr != vec.end(); itr++) cout << *itr << " " ;
            cout << endl ;
        }
            

    }
}