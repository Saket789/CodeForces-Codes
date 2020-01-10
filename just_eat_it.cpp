#include <bits/stdc++.h>
using namespace std ;

long long int max_sum_start(long int *arr, long int len){
    long long int max_so_far = 0 ;
    long long int max_ending_here  = 0 ;
    for(long int i=0; i<len-1; i++){
        max_ending_here = max_ending_here + arr[i] ;
        if (max_ending_here < 0)
            max_ending_here = 0 ;
        else if( max_so_far < max_ending_here )    
            max_so_far = max_ending_here ;
    }
    return max_so_far ;
}

long long int max_sum_end(long int *arr, long int len){
    long long int max_so_far = 0 ;
    long long int max_ending_here  = 0 ;
    for(long int i=1; i<len; i++){
        max_ending_here = max_ending_here + arr[i] ;
        if (max_ending_here < 0)
            max_ending_here = 0 ;
        else if( max_so_far < max_ending_here )    
            max_so_far = max_ending_here ;
    }
    return max_so_far ;
}

int main(){
    int t ;
    cin >> t ;
    while(t--){
        long int n ;
        cin >> n ;
        long int arr[n] , count=0 ;
        long long sum = 0;
        long int p=0, q=0 ;
        
        for(int i=0; i<n; i++){
            cin >> arr[i] ;
            sum += arr[i] ;
        }

        long long int max_sum_from_start = max_sum_start( arr, n) ;
        long long int max_sum_from_end = max_sum_end( arr, n) ;

        if(sum > max_sum_from_end && sum > max_sum_from_start ) cout << "YES" << endl ;
        else cout << "NO" << endl ;

        }
        
    }

