#include<bits/stdc++.h>
using namespace std;

// brute force O(n)
int findTransition(int arr[],int n){
    for(int i=0;i<n;i++) {
        if(arr[i]) return i;
    }
    return -1;
}


// Binary Search : O(log(n))
int transitionPoint(int arr[], int n) {
        // code here
        int l=0,r=n-1;
        int ind=-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(arr[mid]==1){
                ind=mid;
                r=mid-1;
            }
            else {
                l=mid+1;
            }
        }
        return ind;
    }