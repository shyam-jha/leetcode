// You are given an array prices where prices[i] is the price of a given stock on the ith day.
// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
// Return the maximum profit you can achieve from this transaction.
// If you cannot achieve any profit, return 0.

// Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int min_price = prices[0];
        int profit = 0;
        int size = prices.size();
        for (int i = 0; i < size; i++)
        {
            if (min_price > prices[i])
            {
                min_price = prices[i];
            }
            else
            {
                int checkProfit = prices[i] - min_price;
                if (checkProfit > profit)
                {
                    profit = checkProfit;
                }
            }
        }

        return profit;
    }
};