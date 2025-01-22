class StockBuynSell {
public:
    int maxProfit(vector<int>& prices) {
        int min_p = prices[0];
        int maxprof = 0;

        for(int i=1; i<prices.size();i++){
            maxprof = max(maxprof, prices[i]-min_p);
            min_p = min(prices[i],min_p);
        }
        return maxprof;
    }
};
