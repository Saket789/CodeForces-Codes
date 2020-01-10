#include <bits/stdc++.h>
#define ll long int
using namespace std ;

int main(){
    int t ;
    cin >> t ;
    while(t--){
        string s ;
        int len , flag=1, flag2 = 0 , times=0;
        cin >> len ;
        cin >> s ;
        char pre ;

        while(flag == 1){
            flag = 0 ;
        for(int i=len-1; i>=1; i--){
            if(s[i] == 'P' && s[i-1] == 'A'){
                s[i] = 'A' ; 
                flag2 = 1 ;
                flag = 1 ;
            }
        }
        times++ ;
        }

        cout << times - 1 << endl ;
    }
} 