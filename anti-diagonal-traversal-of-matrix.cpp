#include<bits/stdc++.h>
using namespace std;

vector<int> antiDiagonalPattern(vector<vector<int>> matrix) 
    {
        // Code here
        int size=matrix.size();
        vector<int>ans;
        if(size==0) return ans;
        ans.push_back(matrix[0][0]);
        if(size==1) {
            return ans;
        }
        
        for(int i=1;i<size;i++){
            int row=0,col=i;
            while(row<size && col>=0){
                ans.push_back(matrix[row][col]);
                row++;
                col--;
            }
        }
        
        for(int i=1;i<size-1;i++){
            int row=i,col=size-1;
            while(row<size && col>=0){
                ans.push_back(matrix[row][col]);
                row++;
                col--;
            }
        }
        
        ans.push_back(matrix[size-1][size-1]);
        
        return ans;
    }