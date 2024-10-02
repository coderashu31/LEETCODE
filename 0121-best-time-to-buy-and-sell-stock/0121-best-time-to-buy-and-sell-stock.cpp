class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int maxi_p = 0;
        int buy_p = prices[0];
        for(int i:prices){
            if(buy_p > i){
            buy_p = i;
            }
        maxi_p = max(maxi_p, i- buy_p);
        }
        
        return maxi_p;
    
    }
};