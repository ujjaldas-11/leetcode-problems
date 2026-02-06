#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class solution {
    public:
        bool containDuplicate(const vector<int>& nums) {
            unordered_set<int> seen;
            
            for(int n : nums) {
                if(seen.find(n) != seen.end()) {
                    return true;
                }
                seen.insert(n);
            }
            return false;   
        }
};

int main() {
    solution s1;

    vector<int> nums = {1, 2, 4, 3, 1};
    
    for(int i : nums) {
        cout << i << " ";
    }
    
   cout <<  s1.containDuplicate(nums) << endl;

    return 0;
}