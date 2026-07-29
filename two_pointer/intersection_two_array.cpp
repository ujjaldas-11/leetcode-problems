#include <iostream>
// #include <map>
#include <unordered_set>
#include <vector>
// #include <set>

using namespace std;

int main() {
    vector<int> n1 = {1,2,2, 1};
    vector<int> n2 = {2,2};
    vector<int> ans;
    unordered_set<int> set1(n1.begin(), n1.end());

    for(int n: n2) {
        if(set1.count(n)){
            ans.push_back(n);
        }

        set1.erase(n);
    }

    for(int i : ans) {
        cout << i <<endl;
    }



    return 0;
}