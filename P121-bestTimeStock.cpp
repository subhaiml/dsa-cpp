class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        int l = 0;
        int maxp = 0, curp = 0;
        int r = l + 1;
        while (r < prices.size()) {
            if (prices[r] > prices[l]) {
                curp = prices[r] - prices[l];
                maxp = max(maxp, curp);
            } else {
                l=r;
            }
            r++;
        }
        return maxp;
    }
};
