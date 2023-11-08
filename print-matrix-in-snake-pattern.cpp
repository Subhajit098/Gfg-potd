#include<bits/stdc++.h>
using namespace std;


vector<int> snakePattern(vector<vector<int> > matrix)
    {   
        // code here
        bool direction=0;
        int n=matrix.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(!direction){
                for(int j=0;j<n;j++) ans.push_back(matrix[i][j]);
                // diretion=1;
        }
        else {
            for(int j=n-1;j>=0;j--) ans.push_back(matrix[i][j]);
            // direction=0;
        }
        direction=!direction;
    }
    return ans;
    }