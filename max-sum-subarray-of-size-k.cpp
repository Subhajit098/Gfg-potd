#include<bits/stdc++.h>
using namespace std;

long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        int i=0,j=0;
        long maxi=INT_MIN;
        long sum=0;
        while(j<N){
            sum+=Arr[j];
            if(j-i+1<K) j++;
            
            else if(j-i+1==K){
                maxi=max(maxi,sum);
                sum-=Arr[i];
                i++;j++;
            }
        }
        return maxi;
}