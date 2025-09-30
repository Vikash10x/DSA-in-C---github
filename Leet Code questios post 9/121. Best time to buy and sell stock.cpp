class Solution
{
public:
    void maxProfitFind(vector<int> &prices, int i, int &minPrice, int &maxProfit)
    {
        // bace case
        if (i == prices.size())
            return;

        // 1 case soln
        if (prices[i] < minPrice)
            minPrice = prices[i];
        int todayProfit = prices[i] - minPrice;
        if (todayProfit > maxProfit)
            maxProfit = todayProfit;

        // RR
        maxProfitFind(prices, i + 1, minPrice, maxProfit);
    }
    int maxProfit(vector<int> &prices)
    {
        int minPrice = INT_MAX;
        int maxProfit = INT_MIN;
        maxProfitFind(prices, 0, minPrice, maxProfit);
        return maxProfit;
    }
};