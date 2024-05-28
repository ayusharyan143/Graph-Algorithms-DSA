// Matrix Chain Multiplication

#include<bits/stdc++.h>

using namespace std ; 




int mcm( int i , int j , vector<int> &arr ,   vector<vector<int>> &dp )
{
    if( i == j ) return 0 ; 

    if( dp[i][j] != -1 ) return dp[i][j] ;

    int mini = INT_MAX ; 

    for( int k = i ; k < j ; k++ )
    {
        int step = arr[i-1]*arr[k]*arr[j] + mcm( i , k , arr , dp ) + mcm( k+1 , j , arr , dp ) ;

        if( step < mini ) mini = step ; 
    }

    return dp[i][j] =  mini ; 
}




int main()
{
    int n = 5 ; 
    vector<int> arr = { 40, 20, 30, 10, 30 } ;

    vector<vector<int>> dp( n , vector<int>( n,-1)) ;

    cout<<" Most efficient way of multiplication :  "<< mcm( 1 , n-1 , arr , dp );
}