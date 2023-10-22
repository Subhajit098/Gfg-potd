#include<bits/stdc++.h>
using namespace std;


// using recursion approach  (TC: O(2^(m*n)))

int m=1e9+7;
long long  numberOfPaths(int M, int N)
    {
        // Code Here
        if(M==1 || N==1) return 1;
        
        long long right=numberOfPaths(M-1,N);
        long long down=numberOfPaths(M,N-1);
        
        return (right+down+m)%m;
    }

// DP approach (TC: O(m*n), SC:O(m*n))
long long  numberOfPaths(int M, int N)
    {
        // Code Here
        // Initially everything is stored as 1
        vector<vector<int>>dp(M,vector<int>(N,1));
        
        for(int i=1;i<M;i++){
            for(int j=1;j<N;j++){
                dp[i][j]=(dp[i-1][j]+dp[i][j-1]);
            }
        }
        return dp[M-1][N-1]%m;
    }

 // nCr approach :   
