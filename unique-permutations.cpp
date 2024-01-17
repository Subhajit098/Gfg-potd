void helper(int ind,vector<int> &arr,vector<vector<int>>&ans){
        if(ind==arr.size()-1){
            ans.push_back(arr);
            return ;
        } 
        
        for(int i=ind;i<arr.size();i++){
            if(i!=ind && arr[ind]==arr[i]) continue;
            
            swap(arr[ind],arr[i]);
            helper(ind+1,arr,ans);
            // swap(arr[ind],arr[i]);   
        }
        
        for(int i=arr.size()-1;i>ind;i--){
            swap(arr[ind],arr[i]);
        }
    }
  
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
        // code here
        // set<vector<int>>st;
        sort(arr.begin(),arr.end());
        vector<vector<int>>ans;
        helper(0,arr,ans);
        return ans;
      }