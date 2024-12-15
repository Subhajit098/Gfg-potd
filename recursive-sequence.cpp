#include<bits/stdc++.h>
using namespace std;

// Iterative approach
long long sequence(int n){
        // code here
        long long ans=0,prev=1;
        long long mod=1e9+7;
        for(int i=1;i<=n;i++){
           int count=1;
           long long mul=1;
           while(count<=i){
               mul=(mul*prev)%mod;
               prev++;
               count++;
           }
           ans=(ans+mul)%mod;
        }
        return ans;
    }

// Recursive approach
long long helper(int n,int prev,int i){
        long long mod=1e9+7;
        if(i>n) return 0;
        
        long long ans=0,mul=1;
        int count=1;
        while(count<=i){
            mul=(mul*1ll*prev)%mod;
            prev++;
            count++;
        }
        ans=(ans+mul)%mod;
        return (ans+helper(n,prev,i+1))%mod;
    }

    long long sequence(int n){
        // code here
        return helper(n,1,1);
    }