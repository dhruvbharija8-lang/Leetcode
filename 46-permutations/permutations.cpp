class Solution {
public:
  void sol(vector<int>& nums,vector<vector<int>>& ans,vector<int>&temp,vector<int>&vis ){
    if(temp.size()==nums.size()){
        ans.push_back(temp);
        return;
    }
    for(int i=0;i<nums.size();i++){
        if(!vis[i]){
            vis[i]=1;
            temp.push_back(nums[i]);
            sol(nums,ans,temp,vis);
            vis[i]=0;
            temp.pop_back();

        }
    }

  }
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
       vector<vector<int>>ans;
       vector<int>temp;
       vector<int>vis(n,0);
       sol(nums,ans,temp,vis);
       return ans;
    }
};