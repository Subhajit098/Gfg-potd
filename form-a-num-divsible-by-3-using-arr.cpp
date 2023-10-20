#include<bits/stdc++.h>
using namespace std;

int isPossible(int N, int arr[]) {
        // code here
        int ans=0;
        string str="";
        for(int i=0;i<N;i++){
            str+=to_string(arr[i]);
        }
        int num=0;
        for(int i=0;i<str.length();i++){
            num+=str[i]-'0';
        }
        return num%3==0;
    }