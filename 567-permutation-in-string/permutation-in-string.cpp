class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.size();
        int m=s2.size();
        vector<int>freq(26,0);
        vector<int>freqw(26,0);
        for(int i=0;i<n;i++){
            freq[s1[i]-'a']++;
        }
        for(int i=0;i<m;i++){
            freqw[s2[i]-'a']++;
            if(i>=n){
                freqw[s2[i-n]-'a']--;
            }
            if(freqw==freq){
                return true;
            }
        }
        return false;
    }
};