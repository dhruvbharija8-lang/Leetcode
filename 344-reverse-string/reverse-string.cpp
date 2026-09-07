class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        int l=0;
        int r=n-1;
        while(r>=l){
            swap(s[l],s[r]);
            r--;
            l++;

        }
        
    }
};