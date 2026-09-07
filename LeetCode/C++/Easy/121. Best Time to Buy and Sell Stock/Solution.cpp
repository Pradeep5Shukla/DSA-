class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit = 0;
        int min_price = INT_MAX;
        for (int i = 0;i < prices.size();i++){
            int curr_price = prices[i];
            min_price = min(curr_price,min_price);
            int profit = curr_price-min_price;
            maxprofit = max(maxprofit,profit);
        }
        return maxprofit;
    }
};