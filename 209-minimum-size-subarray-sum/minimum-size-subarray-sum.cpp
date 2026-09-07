class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int mini=INT_MAX;
        int ps=0;
        for(int r=0;r<n;r++){
            ps+=nums[r];
            while(ps>=target){
                mini=min(mini,r-l+1);
                ps-=nums[l];
                l++;
            }

        }
     if(mini==INT_MAX){
        return 0;
     }
     else{
        return mini;
     }
    
    }
};