class Solution {
   public:
    int maxProfit(vector<int>& prices) {
        // vector<int> prefix(prices.size());
        // int ans = 0;
        // for (int i = prices.size() - 1; i >= 0; i--) {
        //     if (i == prices.size() - 1)
        //         prefix[i] = prices[i];
        //     else
        //         prefix[i] = max(prefix[i + 1], prices[i]);
        // }

        // for (int i = 0; i < prices.size(); i++) {
        //     ans = max(ans, prefix[i]-prices[i]);
        // }

        // return ans;

        int maxP = 0;
        int minBuy = prices[0];

        for (int& sell : prices) {
            maxP = max(maxP, sell - minBuy);
            minBuy = min(minBuy, sell);
        }
        return maxP;
    }
};
