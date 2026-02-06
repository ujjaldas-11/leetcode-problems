#include <iostream>
#include <vector>


using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        for(int i = 0; i <= nums.size() - 1; i++) {
            int mul = i;
            for(int j = i+1; j <= nums.size()-1; j++) {
                mul *= nums[j];
            }
            ans.push_back(mul);
        }
        return ans;
    }
};

int main() {
    Solution s1;

    vector<int> nums = {1,2,3,4};
    vector<int> result = s1.productExceptSelf(nums);
    for(int i = 0; i <= nums.size()-1; i++) 
    {
        cout << result[i] << " , ";
    }
    // int pro = 1;
    // for (int i = 0; i <= nums.size()-1; i++)
    // {
    //     pro *= nums[i];
    // }
    // cout << pro << endl;
    
    return 0;
}