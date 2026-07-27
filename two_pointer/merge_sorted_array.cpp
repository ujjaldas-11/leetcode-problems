#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;


void merge(int m, int n, vector<int>& nums1, vector<int>& nums2) {
  for (int j = 0, i = m; j<n; j++){
            nums1[i] = nums2[j];
            i++;
        }
  
  sort(nums1.begin(), nums1.end());

}

int main() {
  vector<int> nums1 = {1, 2, 3, 0, 0, 0};
  vector<int> nums2 = {2, 5, 6};
  int m = 3, n = 3;
  
  merge(m,n,nums1, nums2);

  for (int i : nums1) {
    cout << i << endl;
  }
  return 0;
}