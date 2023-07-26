class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int min_e = prices[0];
        prices.push_back(-1);
        for(int i=1;i<prices.size() - 1;i++)
        {
            if(prices[i] > min_e && prices[i] > prices[i + 1])
            {
                profit += prices[i] - min_e;
                min_e = INT_MAX;
                continue;
            }
            if(prices[i] < prices[i - 1])
            {
                min_e = min(prices[i],min_e);
                continue;
            }
        }
        return profit;
    }
};
