class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = prices[0];
        int maxProfit = 0;
        int n = prices.size();
        for(int i=0; i<n; i++) {
            // profit(agar mai aaj bheju toh kitne ka fayda hoga)           = (aaj ka prices kya hai) - (maine kitne me kharida tha[jo ki mini me store hoga]) 
            int profit  = prices[i] - mini;  
            maxProfit = max(maxProfit, profit);
            mini = min(mini, prices[i]);
        }
        return maxProfit;
    }
};