#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;


class Solution {
    public:
        int maxArea(vector<int>& height) {
            int h, w;
            int max_area = 0;
            int l = 0;
            int r = height.size() - 1;

            while(l < r) {
                w = r - l;
                h = min(height[l] , height[r]);
                max_area = max(max_area, (w*h));

                if(height[l] < height[r]) {
                    l++;
                } else {
                    r--;
                }
            }
            return max_area;
        }
};

int main() {
    Solution s;

    vector<int> height = {1,8,6,2,5,4,8,3,7};

    int res = s.maxArea(height);

    cout << "Answer: " << res << endl;


    return 0;

}
