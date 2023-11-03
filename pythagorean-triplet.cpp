#include<bits/stdc++.h>
using namespace std;


// Brute force approach 
int pythagorean(int a,int b,int c){
	    int lhs=c*c,rhs=(a*a)+(b*b);
	    if(lhs==rhs) return 0;
	    else if(lhs>rhs) return 1;
	    return 2;
	}
	
	bool checkTriplet(int arr[], int n) {
	    // code here
	    sort(arr,arr+n);
	    bool ans=false;
	    for(int i=0;i<n;i++){
	        int l=i+1,r=n-1;
	           while(l<r){
	               if(pythagorean(arr[i],arr[l],arr[r])==0) {
	                   ans=true;
	                   break;
	               }
	               else if(pythagorean(arr[i],arr[l],arr[r])==1) r--;
	               else l++;
	           }
	    }
	    return ans;
	}



 // Optimal Approach 
 bool check_squared_triplets(int arr[],int n){
    for(int i=0;i<n;i++){
        arr[i]*=arr[i];
    }

    unordered_set<int>st(arr,arr+n);
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int sum=arr[i]+arr[j];
            if(st.find(sum)!=st.end()) return true;
        }
    }

    return false;
 } 












