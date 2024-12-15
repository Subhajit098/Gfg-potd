#include<bits/stdc++.h>
using namespace std;

vector<int> boundaryTraversal(vector<vector<int> > matrix, int n, int m) 
    {
        // code here
        vector<int>ans;
        if(n==0) return ans;
        
        for(int j=0;j<m;j++){
            ans.push_back(matrix[0][j]);
        }
        
        if(n==1) return ans;
        
        
            for(int i=1;i<n-1;i++){
            ans.push_back(matrix[i][m-1]);
        }
        
        
        for(int j=m-1;j>=0;j--){
            ans.push_back(matrix[n-1][j]);
        }
        
        if(m==1) return ans;
    
            for(int i=n-2;i>=1;i--){
            ans.push_back(matrix[i][0]);
        }
        
        
        return ans;
    }