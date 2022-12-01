class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        int buy=INT_MAX, sell=0, profit=0;
        for(int i=0;i<len;i++){
            if(buy>prices[i]){
                profit=max(profit, sell-buy);
                buy=prices[i];
                sell=prices[i];
            }
            if(sell<prices[i]){
                sell=prices[i];
            }
        }
        return max(profit, sell-buy);
    }
};