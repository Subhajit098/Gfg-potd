#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> subMatrix(vector<vector<int>> matrix,int row,int col){
        int size=matrix.size();
        vector<vector<int>>vec(size-1,vector<int>(size-1));
        int r=0,c=0;
        for(int i=0;i<size;i++){
            if(i!=row){
                for(int j=0;j<size;j++){
                    if(j!=col){
                        vec[r][c]=matrix[i][j];
                        c++;
                    }
                }
                c=0;
                r++;
            }
        }
        return vec;
    }
    
    int determinantOfMatrix(vector<vector<int> > matrix, int n)
    {
        // code here 
        if(n==1) return matrix[0][0];
        
        if(n==2) return ((matrix[0][0]*matrix[1][1])-(matrix[0][1]*matrix[1][0]));
        
        int det=0;
        
        for(int i=0;i<n;i++){
            int cof=pow(-1,i) * matrix[0][i] * determinantOfMatrix(subMatrix(matrix,0,i),n-1);
            det+=cof;
        }
        return det;
    }