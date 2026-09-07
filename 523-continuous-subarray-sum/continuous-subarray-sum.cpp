class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mp;
        int ps=0;
        int count=0;
        int ans=0;
        mp[0]=1;
        for(int i=0;i<n;i++){
            if(nums[i]%k==0){
                count+=1;
            }
        }
        for(int i=0;i<n;i++){
            ps+=nums[i];
            int rem=ps%k;
            if(rem<0){
                rem+=k;
            }
            if(mp.find(rem)!=mp.end()){
                ans+=mp[rem];

            }
            mp[rem]++;
        }
      int a=ans-count;
      if(a>0){
        return true;
      }
      else{
       return false;
      }
    } 
    
};