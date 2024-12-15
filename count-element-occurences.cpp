#include<bits/stdc++.h>
using namespace std;

int countOccurence(int arr[], int n, int k) {
        // Your code here
        int count=n/k;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++) mp[arr[i]]++;
        
        int count_2=0;
        for(auto it:mp){
            if(it.second>count) count_2++;
        }
        return count_2;
    }