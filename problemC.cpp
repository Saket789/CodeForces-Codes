
#include <bits/stdc++.h>
#define ll long long int
#define deb(x) cout << x << " " ;
#define endl '\n'
#define pb push_back
#define mk make_pair
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(x,n,v) for(ll v=x; v<n; v++)
    // vector<pair<int,int>> vec ;
// map<long,long> mp ; 
// set<long> st ; 
using namespace std ; 
int dp[1000][1000] ;

int main(){
    fastio ;
    int t ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        string s , s1="", s2="" ;
        bool f1=false , f2=false ;
        cin >> s ;

        s1 += '1' ; 
        s2 += '1' ; 
            int i=1 ;
            while(s[i] == '0' && n > i){
                // if(!f1){
                    s1 += '0' ; 
                    s2 += '0' ; 
                    i++;
            }
            if(s[i] == '1' && i < n){
                s1 += '1' ;
                s2 += '0' ;
                i++;
            }
            else{ 
                while(1){
                while(s[i] == '2' && i < n){
                s1 += '1' ;
                s2 += '1' ;
                i++;
                }
                if(i == n) break ;
                while(s[i] == '0' && i < n){
                s1 += '0' ;
                s2 += '0' ;
                i++;
                }
                if(i == n) break ;
                if(s[i] == '1' && i<n){
                s1 += '1' ;
                s2 += '0' ;
                i++;
                break ;
                }
                if(i == n) break ;
                }
            }
            // i++;
        loop(i,n,j){
            s1 += "0" ;
        }
        loop(i,n,j){
            s2 += s[j] ;
        }
        cout << s1 << endl << s2 << endl ;
    }
}