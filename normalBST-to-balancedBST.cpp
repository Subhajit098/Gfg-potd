#include<bits/stdc++.h>
using namespace std;

void storeInArray(Node* root,vector<int>&arr){
        if(!root) return;
        
        storeInArray(root->left,arr);
        arr.push_back(root->data);
        storeInArray(root->right,arr);
    }
    
    Node* balancedBST(int l,int r,vector<int> &arr){
        if(l>r) return NULL;
        
        int mid=(l+r)/2;
        Node* root= new Node(arr[mid]);
        root->left=balancedBST(l,mid-1,arr);
        root->right=balancedBST(mid+1,r,arr);
        
        return root;
    }
    
    Node* buildBalancedTree(Node* root)
    {
    	// Code here
    	vector<int>ans;
    	storeInArray(root,ans);
    	int n=ans.size();
    	return balancedBST(0,n-1,ans);
    }