#include<bits/stdc++.h>
using namespace std;

bool canPair(vector<int> nums, int k) {
        // Code here.
        map<int,int> mp;
        if(nums.size()%2!=0) return false;
        for(auto i:nums) mp[i%k]++;
        for(auto i:nums){
            int x=mp[i%k]+mp[k-(i%k)];
            if(x%2!=0) return false;
        }
        return true;
    }