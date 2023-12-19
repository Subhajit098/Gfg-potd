#include<bits/stdc++.h>
using namespace std;

int posOfRightMostDiffBit(int m, int n)
    {
        // Your code here
        if(m==n) return -1;
        int count=1;
        int M=m,N=n;
        while((M&1) == (N&1)){
            M=M>>1;
            N=N>>1;
            count++;
        }
        return count;
    }