#include<bits/stdc++.h>
using namespace std;

// Two recursive methods : 

// First one
void pattern(int N,vector<int>&ans,int n,int i){
        if(i==n/2){
            if(n%5==0){
                ans[i]=0;
            }
            else ans[i]=N;
            return;
        }
        
        ans[i]=N;
        ans[n-i-1]=N;
        pattern(N-5,ans,n,i+1);
    }
    
    vector<int> pattern(int N){
        // code here
        if(N<=0) return {N};
        int k=N/5;
        if(N%5!=0) k++; 
        int n=2*k+1;
        vector<int>ans(n,0);
        pattern(N,ans,n,0);
        
        return ans;
    }


// Second One
void solve2(int last,int n, vector<int> &ans){
        if(last >= n){
            ans.push_back(last);
            return; 
        }
        ans.push_back(last);
        solve2(last + 5, n, ans);
    }
    void solve(int n, vector<int> &ans,int &last){
        if(n <= 0){
            last = n;
            return;
        }
        
        ans.push_back(n);
        solve(n - 5,ans,last);
        
    }
    
    vector<int> pattern(int N){
        vector<int> ans;
        int last;
        solve(N,ans,last);
        solve2(last, N,ans);
        return ans;
    }