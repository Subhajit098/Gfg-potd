#include<bits/stdc++.h>
using namespace std;

// Recursion Approach : O(2^n) , SC: O(1);
// Need to optimize more -> apply DP
bool helper(int coins[],int n,int sum,int ind){
        if(ind==n){
            if(sum>0 && (sum%20==0 || sum%24==0 || sum==2024)){
                // cout<<sum<<endl;
               return true; 
            }
            return false;
        }
        
        if((sum%20==0 || sum%24==0 || sum==2024) && sum>0){
            // cout<<sum<<endl;
            return true;
        }
        
        sum+=coins[ind];
        int pick=helper(coins,n,sum,ind+1);
        if(pick) return true;
        
        sum-=coins[ind];
        int not_pick=helper(coins,n,sum,ind+1);
        if(not_pick) return true;
        
        return false;
        
    }
    
    int isPossible(int N , int coins[]) 
    {
        // sort(coins,coins+N);
        bool ans=helper(coins,N,0,0);
        if(ans) return 1;
        return 0;
    }