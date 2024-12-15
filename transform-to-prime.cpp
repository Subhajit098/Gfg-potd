#include<bits/stdc++.h>
using namespace std;

bool checkPrime(int num){
        // bool prime=false;
        for(int i=2;i<=sqrt(num);i++) if(num%i==0) return false;
        
        return true;
    }
    
    int minNumber(int arr[],int N)
    {
        int sum=accumulate(arr,arr+N,0);
        int prime=sum;
        if(prime==0) return 2;
        if(prime==1)  return 1;
        if(prime==2 || prime==3) return 0;

        bool not_prime=true;
        
        if(!checkPrime(prime))
            not_prime=false;
        
        while(!not_prime){
            prime++;
            if(checkPrime(prime)) {
                not_prime=true;
            }
        }
        return prime-sum;
    }