class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n=s.size();
        int m=p.size();
        vector<int>result;
        vector<int>freq(26,0);
        vector<int>freqw(26,0);
        if(m>n){
            return result;
        }
        for(int i=0;i<m;i++){
            freq[p[i]-'a']++;
        }
        for(int i=0;i<n;i++){
            freqw[s[i]-'a']++;
            if(i>=m){
                freqw[s[i-m]-'a']--;
            }
            if(freqw==freq){
                result.push_back(i-m+1);
            }
     }
     return result;
        
    }
};