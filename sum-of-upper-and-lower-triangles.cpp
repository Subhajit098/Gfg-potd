#include<bits/stdc++.h>
using namespace std;


// TC: O(n*n) , SC: O(1)
vector<int> sumTriangles(const vector<vector<int> >& matrix, int n)
    {
        // code here
        vector<int>ans;
        int diagonal_sum=0;
        for(int i=0;i<n;i++){
            diagonal_sum+=matrix[i][i];
        }
        int upper_sum=diagonal_sum;
        int col=1;
        for(int i=0;i<n-1;i++){
            int second_col=col;
            while(second_col<n){
                upper_sum+=matrix[i][second_col];
                second_col++;
            }
            col++;
        }
        ans.push_back(upper_sum);
        int whole_sum=0;
        upper_sum-=diagonal_sum;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                whole_sum+=matrix[i][j];
            }
        }
        int lower_sum=whole_sum-upper_sum;
        ans.push_back(lower_sum);
        return ans;
        
    }