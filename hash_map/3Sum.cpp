#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class solution {
    public:
        vector<vector<int>> threeSum(vector<int> nums) {
            vector<vector<int>> ans;
            int n = nums.size();
            if (n < 3) return ans;
            
            sort(nums.begin(), nums.end());

            for(int i = 0; i < n-2; i++) {
                // Fixed: Check against previous element, not next
                if(i > 0 && nums[i] == nums[i-1])  {
                    continue;
                }
                int l = i + 1, r = n - 1;
                
                while(l < r) {
                    int threeSum = nums[i] + nums[l] + nums[r];

                    if(threeSum < 0) {
                        l++;
                    } else if(threeSum > 0) {
                        r--;
                    } else {
                        ans.push_back({nums[i], nums[l], nums[r]});

                        // l++;
                        int leftVal = nums[l];
                        int rightVal = nums[r];

                        while( l < r && nums[l] == leftVal) {
                            l++;
                        }

                        while(l < r && nums[r] == rightVal) {
                            r--;
                        }
                    }
                }
                
            }
            
            return ans;
        }
};

int main() {
    solution s1;
    vector<int> nums = {-1,0,1,2,-1,-4};

    auto ans = s1.threeSum(nums);

    cout << "Triplets found:\n";
    for (auto &t : ans) {
        cout << "[" << t[0] << ", " << t[1] << ", " << t[2] << "]\n";
    }

    return 0;
}