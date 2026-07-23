#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> nums1 = {1,2,2,1};
    vector<int> nums2 = {2,2}; 
    int total_size = nums1.size() + nums2.size();
    // vector<int> nums;
    // vector<int> ans;

    for(int i = 0; i<total_size-1; i++) {
        if(nums1[i] != nums2[i]) {
            nums1.push_back(nums2[i]);
        }

        // nums1.insert(nums1.end(), nums2.begin(), nums2 + nums2.size()) ;
        
        // cout << nums1[i] << endl;
    }

    for (int x : nums1) {
        cout << x << endl;
    }

    cout << total_size << endl;

    return 0;


    
}