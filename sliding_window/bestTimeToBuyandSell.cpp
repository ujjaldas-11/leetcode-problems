#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int maxProfit(vector<int>& prices) {
    int l = 0, r = 1;
    int maxProfit = 0;
    
    while(r < prices.size()-1) {
        if(prices[l] < prices[r]) {
            int profit = prices[r] - prices[l];
            maxProfit = max(maxProfit, profit);
        } else {
            l = r;
        }
        r++;        
    }
    return maxProfit;
}


int main() {
    vector<int> prices = {7,1,5,3,6,4};

    cout << maxProfit(prices) << endl;
    return 0;
}