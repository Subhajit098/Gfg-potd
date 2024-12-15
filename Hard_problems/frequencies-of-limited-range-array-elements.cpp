#include<bits/stdc++.h>
using namespace std;

void frequencyCount(vector<int>& arr,int N, int P)
    { 
        // code here
        int k=1e5+7;
        for(int i=0;i<N;i++){
            int idx = (arr[i]%k)-1;
            if(idx>=0 && idx<N)
            arr[idx]+=k;
        }
        
        for(int i=0;i<N;i++) arr[i]=arr[i]/k;
    }
