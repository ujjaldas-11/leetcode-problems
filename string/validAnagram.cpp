#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
    public: 
        bool isAnagram(string s, string t){
            if(s.size() != t.size()) return false;
            sort(s.begin(), s.end());
            sort(t.begin(), t.end());
            return s == t;
        }
};

int main() {
    Solution s1;
    string s = "anagram";
    string t = "ramagra";

    cout << "answer: " << s1.isAnagram(s,t) <<endl;
    return 0;
}