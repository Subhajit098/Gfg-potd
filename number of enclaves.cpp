#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
  
  void make_zeros(int i,int j, int row,int col,vector<vector<int>> &grid){
      grid[i][j]=0;
      int row_dir[4]={-1,0,1,0};
      int col_dir[4]={0,1,0,-1};
      
      for(int k=0;k<4;k++){
          int new_i=i+row_dir[k];
          int new_j=j+col_dir[k];
          
          if(new_i>=0 and new_j>=0 and new_i<row and new_j<col and grid[new_i][new_j]==1){
            make_zeros(new_i,new_j,row,col,grid);  
          }
      }
  }
  
  
    int numberOfEnclaves(vector<vector<int>> &grid) {
        // Code here
        int row=grid.size(),col=grid[0].size();
        // vector<pair<int,int>>track;
        // unordered_map<pair<int,int>,int>mp;
        int count=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==1 and (i==0 or j==0 or i==row-1 or j==col-1)) {
                    make_zeros(i,j,row,col,grid);
                }
            }
        }
        for(int i=1;i<row-1;i++){
            for(int j=1;j<col-1;j++){
                if(grid[i][j]==1) count++;
            }
        }
        return count;
 }

};
