#include<bits/stdc++.h>
using namespace std;
string colName (long long int n)
    {        
        string str="";
        while(n>0){
            str+=((n-1)%26)+'A';
            n=(n-1)/26;
        }
        reverse(str.begin(),str.end());
        return str;
    }