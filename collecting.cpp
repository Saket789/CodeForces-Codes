#include <bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin >> t ;
    while(t--){
        int n , a, b , flag=0;
        cin >> n ;
        vector < pair<int , int > > vec ;
        for(int i=0;i<n;i++){
            cin >> a >> b ;
            vec.push_back(make_pair(a,b));
        }
        sort(vec.begin(), vec.end()) ;

        
        string s="" ;
        int max1 = vec[0].first , max2 = vec[0].second ;

        for(int i=0 ; i<n-1; i++){
            if(vec[i].second > vec[i+1].second){
                cout << "NO" << endl ;
                flag = 1 ;
                break ;
            }
        }
        if(flag == 0){
            // cout << max1 << " " << max2 << "  " ;
        while(max1--){
            s = s + "R" ;
            // cout << " -- " ;
        }
        while(max2--){
            s = s + "U" ;
            // cout << " && " ;
        }

        for(int i=1; i<n; i++){
            a = vec[i].first - vec[i-1].first ;
            while(a--) s = s + "R" ;
            a = vec[i].second - vec[i-1].second ;
            while(a--) s = s + "U" ;

        }
        cout << "YES" << endl ;
        cout << s << endl ;
        }
    }
}