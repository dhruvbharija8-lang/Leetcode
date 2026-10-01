class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int s=0;
        int e=n-1;
        vector<int>result;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(target==nums[mid]){
                if(mid==0||nums[mid-1]!=target){
                    result.push_back(mid);
                }
                e=mid-1;
            }
            else if(target>nums[mid]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
            s=0;
            e=n-1;
             while(s<=e){
            int mid=s+(e-s)/2;
            if(target==nums[mid]){
                if(mid==n-1||nums[mid+1]!=target){
                    result.push_back(mid);
                }
                s=mid+1;
            }
            else if(target>nums[mid]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }

        }
        if(result.size()==0){
            return{-1,-1};
        }
        return result;
    }
};