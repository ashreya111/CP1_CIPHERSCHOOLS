class Solution {
public:
     int maxProfit(vector<int>& prices) {
        if(prices.size()==0) return 0;
        int minimum = prices[0];
        int profit = 0;
        for(int i=1;i<prices.size();i++){
            if((prices[i]-minimum)>profit) profit = prices[i] - minimum;
            if(prices[i]<minimum) minimum = prices[i];
        }
        return profit;
    }
};

