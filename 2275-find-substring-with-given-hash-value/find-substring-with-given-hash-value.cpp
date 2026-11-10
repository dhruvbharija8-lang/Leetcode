class Solution {
public:
    string subStrHash(string s, int power, int modulo, int k, int hashValue) {
        int n = s.size();
        int l = 0;
        string u = "";

        for (int r = 0; r < n; r++) {
            u += s[r];
            if (r - l + 1 == k) {
                long long hash = 0;
                long long p = 1;
                for (int i = 0; i < k; i++) {
                    hash = (hash + (u[i] - 'a' + 1) * p) % modulo;
                    p = (p * power) % modulo;
                }
                if (hash == hashValue) {
                    return u;
                }
                u.erase(0, 1);
                l++;
            }
        }
        return "";
    }
};