#include<bits/stdc++.h>
using namespace std;


bool func_cmp1with2(string str1,string str2,int n){
        unordered_map<char,char>mp;
        for(int i=0;i<n;i++){
            if(mp.find(str1[i])!=mp.end()){
                if(mp[str1[i]]!=str2[i]) return false;
            }
            else {
                mp.insert({str1[i],str2[i]});
            }
        }
        return true;
    }
    
    bool func_cmp2with1(string str1,string str2,int n){
        unordered_map<char,char>mp;
        for(int i=0;i<n;i++){
            if(mp.find(str2[i])!=mp.end()){
                if(mp[str2[i]]!=str1[i]) return false;
            }
            else mp.insert({str2[i],str1[i]});
        }
        return true;
    }
    
    bool areIsomorphic(string str1, string str2)
    {
        // Your code here
        int size1=str1.size(),size2=str2.size();
        if(size1!=size2) return false;  
        
        bool cmp1with2=func_cmp1with2(str1,str2,size1);
        bool cmp2with1=func_cmp2with1(str1,str2,size1);
        // if(cmp1with2 || cmp2with1) return false;
        if(cmp1with2 && cmp2with1) return true;
        return false;
    }