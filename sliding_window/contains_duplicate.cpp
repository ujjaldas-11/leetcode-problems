#include <iostream>
#include <set>
#include <vector>

using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        set<int> hash;

        for(int i = 0; i<nums.size(); i++) {
            if(hash.count(nums[i])) return true;

            hash.insert(nums[i]);

            if(hash.size() > k) {
                hash.erase(nums[i-k]);
            }

        }
            return false;
    }
};

int main() {
  Solution s;

  vector<int> nums = {1,2,3,1};
  int k = 3;

  bool res = s.containsNearbyDuplicate(nums, k);

  cout << res << endl;


  return 0;
}
