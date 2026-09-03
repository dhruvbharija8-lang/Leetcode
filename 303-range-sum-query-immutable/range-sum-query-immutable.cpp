class NumArray {
public:
 vector<int>ans;
    NumArray(vector<int>& nums) {

        int n=nums.size();
        ans.resize(n+1,0);
        int sum=0;
       
        for(int i=0;i<n;i++){
            sum+=nums[i];
            ans[i+1]=sum;
        }
        
    }
    
    int sumRange(int left, int right) {
        return ans[right+1]-ans[left];
        
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */