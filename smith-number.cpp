#include<bits/stdc++.h>
using namespace std;


int digitSum(int n){
        int digit_sum=0;
        while(n>0){
            digit_sum+=n%10;
            n=n/10;
        }
        return digit_sum;
    }
  
    int smithNum(int n) {
        // code here
        int k=n,sum=0;
        for(int i=2;i<=sqrt(n);i++){
            while(n%i==0){
                sum+=digitSum(i);
                n=n/i;
            }
        }
        if(n>1 && n!=k) sum+=digitSum(n);
        
        if(digitSum(k)==sum) return 1;
        return 0;
    }