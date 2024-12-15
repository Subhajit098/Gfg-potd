#include<bits/stdc++.h>
using namespace std;


bool isRotated(string str1, string str2)
    {
        // Your code 
         int n1=str1.size(),n2=str2.size();
        if(n1!=n2) return false;

        if(n1==n2){
            if(n1<3){
                if(str1==str2) return true;
                return false;
            }
        }

        string l_to_r=str1,r_to_l=str1;
        reverse(l_to_r.begin(),l_to_r.end());
        reverse(l_to_r.begin(),l_to_r.end()-2);
        reverse(l_to_r.begin()+n1-2,l_to_r.end());
        // cout<<l_to_r<<endl;

        reverse(r_to_l.begin(),r_to_l.end());
        reverse(r_to_l.begin()+2,r_to_l.end());
        reverse(r_to_l.begin(),r_to_l.end()-n2+2);
        // cout<<r_to_l<<endl;

        if(l_to_r==str2 || r_to_l==str2) return true;
        return false;

        
    }