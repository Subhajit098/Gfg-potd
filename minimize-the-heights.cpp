#include<bits/stdc++.h>
using namespace std;


int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr,arr+n);
        int maxi=arr[n-1]-k,mini=arr[0]+k;
        
        int min_diff=arr[n-1]-arr[0];
        
        for(int i=1;i<n;i++){
            
            if(arr[i]-k<0) continue;
            
            maxi=max(arr[i-1]+k,maxi);
            
            mini=min(mini,arr[i]-k);
            
            
            min_diff=min(min_diff,maxi-mini);
        }
        return min_diff;
    }