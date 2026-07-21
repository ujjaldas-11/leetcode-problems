#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        int i = 1;

        for (int j = 0; j<nums.size() - 1; j++) {
            if(nums[j] == nums[i-1]) {
                nums[i] = nums[j];
                i++; 
            }
        }
        return i;
    }
};


