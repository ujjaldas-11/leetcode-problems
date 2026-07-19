#include <cctype>
#include <iostream>
#include <string>

using namespace std;

class Solution {
    public:
        bool isPall(string s) {
            int start = 0;
            int end = s.size() - 1;

            while(start < end) {
                if(!isalnum(s[start])) {start++; continue;}
                else if(!isalnum(s[end])) {end--; continue;}
                else if(tolower(s[start]) != tolower(s[end])) {
                    return false;
                }
                else {
                    start++;
                    end--;
                }
            }
            return true;
        }
};

int main() {
    Solution s;

    string str = "A man, a plan, a canal: Panama";

    bool res = s.isPall(str);

    cout << res << endl;

    return 0;
}