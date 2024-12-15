#include<bits/stdc++.h>
using namespace std;

int buyMaximumProducts(int n, int k, int price[]){
        //Write your code here
        vector<pair<int,int>>vec;
        // unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            vec.push_back({price[i],i+1});
        }
        
        sort(vec.begin(),vec.end());
        
        int count=0;
        for(int i=0;i<n;i++){
            if(vec[i].first<=k) {
                int counter=vec[i].second;
                for(int j=0;j<counter;j++){
                    if(k-vec[i].first<0) break;
                    k=k-vec[i].first;
                    count++;
                }
            }
            else break;
        }
        return count;
    }