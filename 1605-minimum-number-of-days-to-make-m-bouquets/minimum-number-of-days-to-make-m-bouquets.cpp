class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        if((long long)m*k>n){
            return -1;
        }
        int s=1;
        int e=*max_element(bloomDay.begin(),bloomDay.end());
        int ans=-1;
        while(s<=e){
            int f=0;
            int b=0;

            int mid=s+(e-s)/2;
            for(int i=0;i<n;i++){
                if(bloomDay[i]<=mid){
                    f++;
                    if(f==k){
                        b++;
                        f=0;
                    }
                }
                else{
                    f=0;
                }

            }
            if(b>=m){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
  return ans;

        
    }
};