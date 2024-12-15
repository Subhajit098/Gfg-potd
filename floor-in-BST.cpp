#include<bits/stdc++.h>
using namespace std;

int floor(Node* root, int x) {
        // Code here
        if(root==NULL)
        {
            return -1;
        }
        int t=root->data;
        int ans=-1;
        if(t<=x)
        {
            int e=floor(root->right,x);
            ans=max(e,t);
        }
        else
        {
            int e=floor(root->left,x);
            ans=max(ans,e);
        }
        return ans;
    }