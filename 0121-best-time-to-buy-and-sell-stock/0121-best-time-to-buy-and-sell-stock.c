int maxProfit(int* prices, int pricesSize) {
    int profit,min_p;
    profit = 0;
    min_p = prices[0];
    for (int i=1;i<pricesSize;i++){
        if (prices[i] < min_p){
            min_p = prices[i];
        }
        else if ((prices[i] - min_p) > profit){
            profit = prices[i] - min_p;
        }
    }

    return profit;
}