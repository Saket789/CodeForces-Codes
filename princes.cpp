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
    int t ;
    cin >> t ;
    while(t--){
    int n; cin >> n;
    vector<bool> ids(n + 1, 0);
 
    bool notdone = true;
    int id;
    for(int i = 1; i <= n; ++i){
        int x; cin >> x;
        //traverse till we not find mnm number not taken
        bool my = 0;
        for(int j = 0, y; j < x; ++j){
            cin >> y;
            if( !ids[y] and !my ){
                my = 1;
                ids[y] = 1;
            }
        }
        if( !my and notdone ){
            notdone = false;
            id = i;
        }
    }
 
    if(notdone){
        cout << "OPTIMAL\n";
    } else {
        cout << "IMPROVE\n";
        cout << id << " ";
        for(int i = 1; i <= n; ++i){
            if( !ids[i] ){
                cout << i << '\n';
                break;
            }
        }
    }
    }
}