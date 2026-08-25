class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int total=0;
        for(int i=0;i<n;i++){
            total+=nums[i];
        }
        int ls=0;
        for(int i=0;i<n;i++){
          int r=total-ls-nums[i];
          if(ls==r){
            return i;
          }
          ls+=nums[i];
        }
        return -1;
    }
};