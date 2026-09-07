class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        int ps=0;
        int ans=0;
        mp[0]=-1;
        int maxi=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                nums[i]=-1;
            }
        }
        for(int i=0;i<n;i++){
            ps+=nums[i];
            if(mp.find(ps)!=mp.end()){
                ans=i-mp[ps];
                maxi=max(maxi,ans);
            }
            else{
            mp[ps]=i;
            }
        }
        return maxi;
    }
};