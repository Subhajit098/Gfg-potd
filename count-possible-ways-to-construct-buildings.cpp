#include<bits/stdc++.h>
using namespace std;

// Memoization approach , TC: O(n), SC: O(n) + O(n)

int mod=1e9+7;
	
	int helper(int i,vector<int>& dp){
	    if(i==0) return 1;
	    
	    if(i==1) return 2;
	    
	    if(i<0) return 0;
	    
	    if(dp[i]!=-1) return dp[i];
	    
	    int take=helper(i-2,dp);
	    int not_take=helper(i-1,dp);
	    
	    return dp[i]=(take+not_take)%mod;
	}
	
	int TotalWays(int N)
	{
	    // Code here
	    vector<int>dp(N+1,-1);
	   // int ans=helper(N,dp);
	    long long ans=helper(N,dp);
	    return (ans*ans)%mod;
	}


// Tabulation approach , TC: O(n), SC: O(n) 
    int totalWays(int N){
        // vector<long long>dp(N+1,-1);
        // dp[0]=1,dp[1]=2;
        // for(int i=2;i<=N;i++){
        //     dp[i]=(dp[i-1]+dp[i-2])%mod;
        // }

        // return (dp[N]*dp[N])%mod;

    // TC : O(N)  , SC: O(1)
        long long prev2=1,prev1=2;
        for(int i=2;i<=N;i++){
            long long curr=(prev2+prev1)%mod;
            prev2=prev1;
            prev1=curr;
        }

        return (prev1*prev1)%mod;
    }