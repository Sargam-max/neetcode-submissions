class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int var=0;
        int s=prices.size();
        for(int i=0;i<s;i++){
            for(int j=i+1;j<s;j++){
                if(prices[j]>prices[i]){
                        var=prices[j]-prices[i];
                 
                }

                profit=max(profit,var);
            }
        }

        return profit;
        
    }
};
