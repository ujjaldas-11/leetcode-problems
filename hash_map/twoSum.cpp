#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class solution {
    public: 
        vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int, int> map;

            for(int i=0; i< nums.size(); i++ ) {
                int complement = target - nums[i];
                if(map.find(complement) != map.end()) {
                    return {map[complement], i};
                }
                map[nums[i]] = i;
            }
            return {};
        }
};

int main() {
     solution s1;
    vector<int> arr = {2,3,7,9,5};

    vector<int> result = s1.twoSum(arr, 12);
    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No two sum solution found.";
    }


    return 0;
}