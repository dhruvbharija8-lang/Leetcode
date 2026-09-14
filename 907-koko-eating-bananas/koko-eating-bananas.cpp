class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int ans=INT_MAX;
        int s=1;
        int e=*max_element(piles.begin(), piles.end());;
        while(s<=e){
            int mid=s+(e-s)/2;
            long long hrs=0;
            for(int pile:piles){
                hrs+=(pile+mid-1)/mid;
            }
            if(hrs<=h){
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