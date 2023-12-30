#include<bits/stdc++.h>
using namespace std;

vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        map<string,int> mp;
        for(int i=0;i<n;i++)
        mp[arr[i]]++;
        int mn=INT_MIN;
        vector<string> ans;
        for(auto it:mp)
        {
            if(it.second>mn)
            {
                ans.clear();
                ans.push_back(it.first);
                mn=it.second;
            }
        }
        string mnn= to_string(mn);
        vector<string> v;
        v.push_back(ans[0]);
        v.push_back(mnn);
        return v;
    }