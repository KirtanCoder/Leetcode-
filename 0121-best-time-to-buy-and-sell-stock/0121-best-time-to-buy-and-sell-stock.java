class Solution {
    public int maxProfit(int[] prices) {

        int minPrice = Integer.MAX_VALUE;
        int maxProfit = 0;

        for (int price : prices) {

            // cheapest buying price
            if (price < minPrice) {
                minPrice = price;
            }

            // current profit
            int profit = price - minPrice;

            // maximum profit
            if (profit > maxProfit) {
                maxProfit = profit;
            }
        }

        return maxProfit;
    }
}