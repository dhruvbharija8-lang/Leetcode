class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int s=0;
        int e=n-1;
        int maxp=0;
        while(s<e){
            if(height[s]<height[e]){
                maxp=max(maxp,height[s]*(e-s));
                s++;
            }
            else{
                 maxp=max(maxp,height[e]*(e-s));
                 e--;
            }
        }
        return maxp;
    }
};