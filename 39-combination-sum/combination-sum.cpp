class Solution {
public:
vector<vector<int>>result;
void solve(vector<int>& candidates, int target,int idx,vector<int>curr){
    if(target==0){
        result.push_back(curr);
        return;
    }
    if(idx==candidates.size()||target<0){
        return;
    }
    if(candidates[idx]<=target){
        curr.push_back(candidates[idx]);
        solve(candidates,target-candidates[idx],idx,curr);
        curr.pop_back();
    }
    solve(candidates,target,idx+1,curr);

}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>curr;
        solve(candidates,target,0,curr);
        return result;
        
    }
};