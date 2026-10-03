class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int s = *max_element(weights.begin(), weights.end());
        int ans=-1;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=weights[i];
        }
        int e=sum;
        
        while(s<=e){
            int ps=0;
            int mid=s+(e-s)/2;
            int d=1;
            for(int i=0;i<n;i++){
                if(ps+weights[i]<=mid){
                     ps+=weights[i];
            
                }
                else{
                    d++;
                    ps=weights[i];
                }

            }
        
            if(d<=days){
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