#include<bits/stdc++.h>
using namespace std;


int countSetBit(int x){
        int count=0;
        while(x>0){
            count+=(x&1);
            x=x>>1;
        }
        return count;
    }
    
	int is_bleak(int n)
	{
	    // Code here.
	    for(int i=n-29;i<=n-1;i++){
	        if(i+countSetBit(i)==n) return 0;
	    }
	    return 1;
	}