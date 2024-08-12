class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        if (prices.size()==1) return money;
        else if (prices.size()==2) {
            if (prices[1]+prices[0] > money) return money;
            else {
                return money-(prices[1]+prices[0]);
            }
        }
        sort(prices.begin(), prices.end());
        if (prices[1]+prices[0] > money) return money;
            else {
                return money-(prices[1]+prices[0]);
            }
    }
};