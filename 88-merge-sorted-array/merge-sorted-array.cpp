class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int k=m+n-1;
        int u=n-1;
        int l=m-1;
        while(l>=0&&u>=0){
            if(nums2[u]>=nums1[l]){
                nums1[k]=nums2[u];
                u--;
            }
            else{
                nums1[k]=nums1[l];
                l--;
            }

                k--;
        
        }
        while(u>=0){
            nums1[k]=nums2[u];
            u--;
            k--;
        }
       
    }
};