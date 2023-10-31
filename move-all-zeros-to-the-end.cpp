#include<bits/stdc++.h>
using namespace std;


void pushZerosToEnd(int arr[], int n) {
	    // code here
	    int i=0;
	    for(int j=0;j<n;j++){
	        if(arr[j]) {
	            swap(arr[i],arr[j]);
	            i++;
	        }
	    }
	}