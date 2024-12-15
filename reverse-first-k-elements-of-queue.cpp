#include<bits/stdc++.h>
using namespace std;

// With using an additional queue
queue<int> modifyQueue(queue<int> q, int k) {
        // add code here.
        queue<int>ans;
        vector<int>vec;
        for(int i=0;i<k;i++){
            vec.push_back(q.front());
            q.pop();
        }
        for(int i=k-1;i>=0;i--){
            ans.push(vec[i]);
            vec.pop_back();
        }
        
        while(q.size()>0){
            ans.push(q.front());
            q.pop();
        }
        
        return ans;
    }

    

// Without using an additional queue 
queue<int> modifyQueue(queue<int> q, int k) {
        // add code here.
        stack<int>st;
        int m=q.size()-k;
        for(int i=0;i<k;i++){
            int front=q.front();
            q.pop();
            st.push(front);
        }
        for(int i=0;i<k;i++){
            int front=st.top();
            st.pop();
            q.push(front);
        }
        for(int i=0;i<m;i++){
            int front=q.front();
            q.pop();
            q.push(front);
        }
        return q;
    }