#include<bits/stdc++.h>
using namespace std;

int findWinner(int n, int A[]){
        // code here
        int ans=A[0];
        for(int i=1;i<n;i++)
        {
            ans^=A[i];  
        }
        if(ans==0)
          return 1;
        if(n%2==0)
          return 1;
        else
          return 2;
    }