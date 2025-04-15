class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxP = 0;
        for(int i = 0; i<prices.size()-1; i++){
            maxP += max(prices[i+1]-prices[i],0);
        }
        return maxP;
    }
};
