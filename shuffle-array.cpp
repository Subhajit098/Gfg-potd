#include<bits/stdc++.h>
using namespace std;


void shuffleArray(int arr[],int n)
	{
	    // Your code goes here
	    vector<int>arr1(n/2,0);
	    vector<int>arr2(n/2,0);
	    
	    for(int i=0;i<n/2;i++){
	        arr1[i]=arr[i];
	        arr2[i]=arr[n/2+i];
	    }
	    
	    int k=0;
	    for(int i=0;i<n/2;i++){
	        arr[k]=arr1[i];
	        k++;
	        arr[k]=arr2[i];
	        k++;
	    }
	    
	}