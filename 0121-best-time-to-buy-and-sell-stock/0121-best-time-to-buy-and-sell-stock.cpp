class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // Initialize buy (b) to the highest possible value
        int b = INT_MAX;
        // Initialize sell (s) to 0
        int s = 0;

        for (int i = 0; i < prices.size(); ++i) {
            // Update buy price if current price is lower
            if (prices[i] < b) {
                b = prices[i];
            }
            // Calculate potential sell profit
            else if (prices[i] - b > s) {
                s = prices[i] - b;
            }
        }

        return s;
    }
};