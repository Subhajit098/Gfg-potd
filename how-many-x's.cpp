#include<bits/stdc++.h>
using namespace std;

// Brute force approach
int check(int num,int x){
        int count=0;
        while(num>0){
                int rem=num%10;
                if(rem==x) count++;
                num=num/10;
            }
            return count;
    }
  
    int countX(int L, int R, int X) {
        // code here
        int l=L,r=R,x=X;
        int i=l+1;
        int count=0;
        while(i<=r-1){
            int digits_count=check(i,x);
            count+=digits_count;
            i++;
        }
        return count;
    }