#include<bits/stdc++.h>
using namespace std;

int singleElement(int arr[] ,int N) {
        // code here
        // int sum=0;
        int ans=0;
       for(int i=0;i<32;i++){
           int setBit=1<<i;
           int count=0;
           for(int j=0;j<N;j++){
               if(setBit & arr[j]) count++;
           }
           
           if(count%3) ans+=1<<i;
       }
       
       return ans;
    }