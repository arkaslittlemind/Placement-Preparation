class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = 0, sell = 1;
        int maxProfit = 0;
        int profit = 0;
        while(sell < prices.size()) {
            if(prices[buy] < prices[sell]){
               profit = prices[sell] - prices[buy];
               maxProfit = max(profit, maxProfit);
            } else {
                buy = sell;
            }
            sell++;
        }
    return maxProfit;
    }
};