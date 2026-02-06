#include <iostream>
#include <vector>

using namespace std;

vector<int> twosum2(vector<int>& nums, int target) {
    int i = 0, j = nums.size()-1, sum;

    while(i < j) {
        sum = nums[i] + nums[j];
        if(sum > target) {
            j--;
        } else if(sum < target) {
            i++;
        } else {
            return {i,j};
        }
    }
    return {};
}

int main() {
    vector<int> nums = {2,3,4, 5, 6};
    vector<int> result = twosum2(nums, 9);

    cout << "Output: " << result[0] << ", " << result[1] << endl; 
    
    return 0;
}