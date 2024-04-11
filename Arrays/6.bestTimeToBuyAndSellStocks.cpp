int bestTimeToBuyAndSellStock(vector<int>&prices) {
    // Write your code here.
    int small = prices[0];
    int ans = INT_MIN;
    int n = prices.size();
    for(int i = 0; i < n; i++){
        small = min(small, prices[i]);

        ans = max(ans, prices[i] - small);
    }
    return ans;
}