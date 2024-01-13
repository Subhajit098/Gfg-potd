#include<bits/stdc++.h>
using namespace std;

vector<int> repeatedRows(vector<vector<int>> &matrix, int M, int N) 
    { 
        // Your code here
        map<vector<int>,int>mp;
        vector<int>ans;
        for(int i=0;i<M;i++){
            if(mp.count(matrix[i])) ans.push_back(i);
            else mp[matrix[i]]++;
        }
      return ans;
    } 