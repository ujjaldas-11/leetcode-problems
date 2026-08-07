class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0, res = 0;
        set<char> hashSet;

        for(int r=0; r < s.size(); r++) {
            while(hashSet.count(s[r]) > 0) {
                hashSet.erase(s[l]);
                l++;
            }
            hashSet.insert(s[r]);
            res = max(res, r-l+1);
        }

        return res;
    }
};
