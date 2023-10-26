#include<bits/stdc++.h>
using namespace std;

int minOperation(int n)
    {
        //code here.
        if(n==0) return 0;
        if(n==1) return 1;
        
        int count=0;
        while(n>0){
           if(n%2==0) {
               n=n/2;
               count++;
           }
           else {
               n=n-1;
               count++;
           }
        }
        return count;
    }