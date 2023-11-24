#include<bits/stdc++.h>
using namespace std;

vector<long long> nthRowOfPascalTriangle(int n) {
        // code here
        vector<vector<long long>>ans;
        int m=1e9+7;
        if(n==1){
            return {{1}};
        }
        if(n==2) return {{1,1}};
        
        ans={{1},{1,1}};
        
        for(int i=3;i<=n;i++){
            vector<long long>ds;
            int m=i-2;
            ds.push_back(1);
            
            for(int j=0;j<i-2;j++){
                long long sum=(ans[m][j]+ans[m][j+1])%m;
                ds.push_back(sum);
            }
            
            ds.push_back(1);
            ans.push_back(ds);
        }
        return ans[n-1];
    }

int main()
{

return 0;
}