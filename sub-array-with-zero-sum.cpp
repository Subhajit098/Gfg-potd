#include<bits/stdc++.h>
using namespace std;


bool subArrayExists(int arr[], int n)
    {
        //Your code here
        unordered_map<int,int>mp;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            
            if(sum==0) return true;
            
            if(arr[i]==0) return true;
            
            else if(mp.find(sum)!=mp.end()) return true;
            
            else {
                mp[sum]=i;
            }
        }
        return false;
    }