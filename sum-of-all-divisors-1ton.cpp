#include<bits/stdc++.h>
using namespace std;

long long sumOfDivisors(int N)
    {
        // Write Your Code here
        // long long arr[N+1]={0};
        // arr[0]=0;
        long long sum=0;
        // for(int i=4;i<=N;i++){
        //     for(int j=2;j<i;j++){
        //         if(i%j==0) sum+=j;
        //     }
        // }
        // for(int i=2;i<=N;i++) sum+=i;
        
        // return sum;
        for(int i=1;i<=N;i++){
            sum+=(N/i)*i;
        }
        return sum;
    }