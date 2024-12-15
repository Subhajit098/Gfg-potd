#include<bits/stdc++.h>
using namespace std;

int smallestSubstring(string S) {
        // Code here
        int n=S.size();
        int i=0,j=0,ans=n+1;
        int count[3]={0};
        while(j<n){
            count[S[j]-'0']++;
            
            if(count[0]>0 && count[1]>0 && count[2]>0){
                ans=min(ans,j-i+1);
                while(count[S[i]-'0']>1){
                    count[S[i]-'0']--;
                    i++;
                }
                ans=min(ans,j-i+1);
            }
            j++;
        }
        if(ans==n+1) return -1;
        return ans;
    }