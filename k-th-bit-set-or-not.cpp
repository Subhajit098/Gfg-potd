#include<bits/stdc++.h>
using namespace std;


bool checkKthBit(int n, int k)
    {
        // Your code here
        // while(k!=0){
        //     n=n>>1;
        //     k--;
        // }
        // return (n&1);
        return n & (1<<k);
    }