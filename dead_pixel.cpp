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

        int a,b,c,d ;
        cin >> a >> b >> c >> d ;

        ll max = -INT_MAX+1000 , mul=1;

        ll p[3], q[3];

        p[0]=a; p[1]=a-c-1; p[2]=c;

        q[0]=b; q[1]=b-d-1; q[2]=d;

        loop(0,3,i){
                // cout << p[i] << " " ;
            loop(0,3,j){
                // cout << q[j] << " " ;
                mul=p[i]*q[j];
                if(p[i]==a && q[j]==b) continue ;
                if(max < mul) max = mul ;
            }
        }

        cout << max << endl ;

    }
}