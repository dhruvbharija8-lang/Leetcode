class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0;
        int n=t.size();
        for(int j=0;j<n;j++){
            if(i<s.size() && s[i]==t[j]){
                i++;
            }
        }
        return i==s.size();
    }
};