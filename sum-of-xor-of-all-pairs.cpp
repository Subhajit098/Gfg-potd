#include<bits/stdc++.h>
using namespace std;

// brute force
// TC:O(N*N) , SC:O(1)
long long sumXor(int arr[],int n){
    long long sum=0;
    	for(int i=0;i<n-1;i++){
    	    for(int j=i+1;j<n;j++){
    	        int Xor=arr[i];
    	        sum+=Xor^arr[j];
    	    }
    	}
    	return sum;
}

// Optimized approach 
// TC:O(32*N) , SC:O(1)
long long sumXOR(int arr[],int n){
    long long sum=0;
    for(int i=0;i<32;i++){
        int k=1<<i;
        long long set=0,unset=0;
        for(int j=0;j<n;j++){
            if(k&arr[j]) set++;
            else unset++;
        }
        sum+=(set*unset)*k;
    }
    return sum;
}