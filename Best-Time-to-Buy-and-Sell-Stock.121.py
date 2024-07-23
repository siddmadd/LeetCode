class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        if (len(prices) == 1):
            return 0
        if (len(prices) == 2):
            return max(0,(prices[1] - prices[0]))
        buy = prices[0]
        sell = 0
        profit = 0
        for i in range(1,len(prices)):
            if (buy > prices[i]):
                buy = prices[i]
                sell = 0
            if (sell < prices[i]):
                sell = prices[i]
                sample = sell - buy
                if (sample > profit):
                    profit = sample
        return profit

        