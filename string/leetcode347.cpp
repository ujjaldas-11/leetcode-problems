#include <iostream>
#include <vector>
#include <set>

using namespace std;

class Solution {
    public: 
        int  lengthOfLongestSubstring(string s) {
            set<char> map;

            for(char c : s) {
                map.insert(c);
            }
        return map.size();
    }
};

int main() {
    Solution s1;

    string s = "pwwkew";

    int res = s1.lengthOfLongestSubstring(s);
    cout << res << endl;
    return 0;
}