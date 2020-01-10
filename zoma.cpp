#include <bits/stdc++.h>
using namespace std ;

int main(){
    int n ;
    cin >> n ;
    string s ;
    cin >> s ;
    int ans , j=0, k=0 ;
    for(int i=0; i<n ;i++){
        if(s[i] == 'L'){
            j++ ;
        }
        if(s[i] == 'R'){
            k++ ;
        }
    }
    cout << j+k+1 ;
}