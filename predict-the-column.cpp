#include<bits/stdc++.h>
using namespace std;


int columnWithMaxZeros(vector<vector<int>>arr,int N){
        // Your code here
        int ind=-1;
        int maxi=0;
        for(int i=0;i<N;i++){
            int count=0;
            for(int j=0;j<N;j++){
                if(!arr[j][i]) count++;
            }
            if(count>maxi) {
                maxi=count;
                ind=i;
            }
        }
        return ind;
    }