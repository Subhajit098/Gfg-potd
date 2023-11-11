#include<bits/stdc++.h>
using namespace std;


string printMinNumberForPattern(string s){
        // code here 
        stack<int>st;
        string ans="";
        int n=s.size();
        for(int i=0;i<=n;i++){
            st.push(i+1);
            if(s[i]=='I' || i==n){
                while(!st.empty()){
                    ans+=to_string(st.top());
                    st.pop();
                }
            }
        }
        return ans;
    }