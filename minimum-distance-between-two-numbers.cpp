#include<bits/stdc++.h>
using namespace std;

int minDist(int a[], int n, int x, int y) {
        // code here
        int ind_x=-1,ind_y=-1;
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            if(a[i]==x){
                ind_x=i;
                if(ind_y!=-1){
                    mini=min(mini,abs(ind_x-ind_y));
                }
                else continue;
            }
            else if(a[i]==y){
                ind_y=i;
                if(ind_x!=-1){
                    mini=min(mini,abs(ind_x-ind_y));
                }
                else continue;
            }
        }
        if(mini!=INT_MAX) return mini;
        return -1;
    }