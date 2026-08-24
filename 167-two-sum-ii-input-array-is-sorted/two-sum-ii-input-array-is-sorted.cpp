class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int l=0;
        int r=n-1;
        while(r>l){
            if(numbers[r]+numbers[l]>target){
                r--;
            }
            else if(numbers[r]+numbers[l]<target){
                l++;
            }
            else{
                return {l+1,r+1};
            }

        }
        return {};
    }
};