#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxprofit(vector<int>& prices) {
    int maxprofit = 0;
    int bestbuy = prices[0];
    int n = prices.size();

    for (int i = 0; i < n; i++) {
        maxprofit = max(maxprofit, prices[i] - bestbuy);
        bestbuy = min(bestbuy, prices[i]);
    }

    return maxprofit;
}

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << "Maximum Profit: " << maxprofit(prices) << endl;
    return 0;
}
