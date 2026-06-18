
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = 0;
        int min = prices[i];
        int max = 0;
        while (i < prices.size())
        {
            if (prices[i] < min)
                min = prices[i];
            if (prices[i] - min > max)
                max = prices[i] - min;
            i++;
        }
        return(max);
    }
};