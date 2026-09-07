class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n=nums.size();
        unordered_map<int,int>mp;
        mp[0]=1;
        int ans=0;
        int ps=0;
        for(int i=0;i<n;i++){
            ps+=nums[i];
            if(mp.find(ps-goal)!=mp.end()){
                ans+=mp[ps-goal];

            }
            mp[ps]++;

        }
        return ans;
        
    }
};