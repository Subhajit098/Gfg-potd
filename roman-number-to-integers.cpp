#include<bits/stdc++.h>
using namespace std;

int returnValue(char c){
        int num=0;
        if(c=='I') num=1;
        else if(c=='V') num=5;
        else if(c=='X') num=10;
        else if(c=='L') num=50;
        else if(c=='C') num=100;
        else if(c=='D') num=500;
        else if(c=='M') num=1000;
        
        return num;
    }
  
    int romanToDecimal(string &str) {
        // code here
        int n=str.length();
        if(n==1) return returnValue(str[0]);
        int count=0;
        for(int i=0;i<str.length()-1;i++){
            if(returnValue(str[i])>=returnValue(str[i+1])) count+=returnValue(str[i]);
            
            else count-=returnValue(str[i]);
        }
        
        count+=returnValue(str[n-1]);
        
        return count;
    }