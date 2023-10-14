#include<bits/stdc++.h>
using namespace std;

// Time Complexity : O(h1) + O(h2) +  O(max(h1,h2))
// Space Complexity : O(max(h1,h2))


void traversal(Node* root,map<int,int>&mp){
        if(!root) return;
        
        traversal(root->left,mp);
        mp[root->data]++;
        traversal(root->right,mp);
    }
    
    vector <int> findCommon(Node *root1, Node *root2)
    {
     //Your code here
     map<int,int>mp;
     traversal(root1,mp);
     traversal(root2,mp);
     vector<int>ans;
     if(!root1 || !root2) return ans;
     for(auto it:mp){
         if(it.second>1) ans.push_back(it.first);
     }
     return ans;
    }