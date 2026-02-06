#include <stack>
#include <string>
#include <iostream>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
       stack<char> st;
       for(char c : s) {
        if(c == '(' || c == '{' || c == '[') {
            st.push(c);
        } else {
            if(st.empty()) return false;

            char top = st.top();
            st.pop();

            if((c == ')' && top != '(') || (c == '}' && top != '{') || (c == ']' && top != '[')) {
                return false;
            }
        }
       }
       return st.empty();
    }
};


int main() {
    Solution s1;

    char s[] = "{()}";
    int result = s1.isValid(s);
    if(result) {
        cout << "valid "<< endl;
    } else{
        cout << "Not valid "<< endl;
    }

    return 0;
}