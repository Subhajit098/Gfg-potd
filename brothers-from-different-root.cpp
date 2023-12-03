#include<bits/stdc++.h>
using namespace std;


struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data=val;
        left=right=NULL;
    }
};

void first(Node* root1,unordered_map<int,int>&mp,int x){
        if(!root1) return;
        
        mp[x-root1->data]++;
        first(root1->left,mp,x);
        first(root1->right,mp,x);
    }
    
    void countMatches(Node* root2,unordered_map<int,int>&mp,int &count){
        if(!root2) return;
        
        if(mp[root2->data]) count++;
        
        
        countMatches(root2->left,mp,count);
        countMatches(root2->right,mp,count);
    }

    int countPairs(Node* root1, Node* root2, int x)
    {
        unordered_map<int,int>mp;
        first(root1,mp,x);
        int count=0;
        countMatches(root2,mp,count);
        return count;
    }