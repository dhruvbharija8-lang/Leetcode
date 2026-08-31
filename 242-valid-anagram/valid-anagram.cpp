class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>l(26);
        vector<int>u(26);
        for(int i=0;i<s.size();i++){
            if(s[i]>='a'){
                l[s[i]-'a']++;
            }
        }

         for(int i=0;i<t.size();i++){
            if(t[i]>='a'){
                u[t[i]-'a']++;
            }
        }
        for(int i=0;i<26;i++){
            if(l[i]!=u[i]){
                return false;
            }
        }
        return true;
    }
};