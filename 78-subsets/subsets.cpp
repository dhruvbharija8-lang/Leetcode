class Solution {
public:
 vector<vector<int>>res;
  void sub(vector<int>& nums,int idx,vector<int>& curr){
    int n=nums.size();
    if(idx==n){
        res.push_back(curr);
        return;
    }
    curr.push_back(nums[idx]);
    sub(nums,idx+1,curr);
    curr.pop_back();
    sub(nums,idx+1,curr);
    
   }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>curr;
        
        sub(nums,0,curr);
       return res;

        
    }
};