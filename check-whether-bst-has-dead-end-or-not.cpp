#include<bits/stdc++.h>
using namespace std;



bool checkDeadEnd(Node* root,int rootValue){
        if(!root) return false;
        
        if(!root->right && !root->left){
            int diff=abs(root->data-rootValue);
            bool ans;
            if(root->data==rootValue-1 || root->data==rootValue+1) ans=true;
            else ans=false;
            return ans;
        }
        
        if(checkDeadEnd(root->left,rootValue) || checkDeadEnd(root->right,rootValue)) {
            return true;
        } 
        return false;
    }
    
    bool isDeadEnd(Node *root)
    {
        //Your code here
        // if(!root) return false;
        int rootValue=root->data;
        bool ans=checkDeadEnd(root,rootValue);
        return ans;
    }