#include<bits/stdc++.h>
using namespace std;


vector<int> matrixSum(int n, int m, vector<vector<int>> mat, int q, vector<int> queries[])
    {
        // code here
       vector<int>ans;
        for(int i=0;i<q;i++){
            int hop=queries[i][0];
            int row=queries[i][1];
            int col=queries[i][2];
            int sum=0;
            if(hop==1){
                int xAxis[] = {-1,-1,-1,0,0,1,1,1};
                int yAxis[] = {-1,0,1,-1,1,-1,0,1};
                
                for(int j=0;j<8;j++){
                    int newRow=row+xAxis[j];
                    int newCol=col+yAxis[j];
                    if(newRow>=0 && newRow<n && newCol>=0 && newCol<m) sum+=mat[newRow][newCol];
                }
                ans.push_back(sum);
                sum=0;
                
            }
            else{
                int xAxis[] = {-2, -2, 2, 2, -2, 2, 0, 0, -2, -2, 2, 2, -1, 1, -1, 1};
                int yAxis[] = {-2, 2, -2, 2, 0, 0, -2, 2, -1, 1, -1, 1, -2, -2, 2, 2};
                
                for(int j=0;j<16;j++){
                    int newRow = row+xAxis[j];
                    int newCol = col+yAxis[j];
                    if(newRow>=0 && newCol>=0 && newRow<n && newCol<m) sum+=mat[newRow][newCol];
                }
                ans.push_back(sum);
                sum=0;
            }
        }
        return ans;
    }