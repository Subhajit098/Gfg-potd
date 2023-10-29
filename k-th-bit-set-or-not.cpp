#include<bits/stdc++.h>
using namespace std;


bool checkKthBit(int n, int k)
    {
        // Your code here
        // TC: O(log(N)) approach 
        // while(k!=0){
        //     n=n>>1;
        //     k--;
        // }
        // return (n&1);

        // TC: O(1)  
        return n & (1<<k);
    }