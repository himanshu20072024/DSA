// time complexity is O(N)
// space complexity is O(1)
// for best time to buy and sell stock

class Solution {
public:
    int maxProfit(vector<int>& arr) 
    {
        int buy = arr[0];
        int maxProfit = 0;
        for(int i = 1; i < arr.size(); i++)
        {
            int cost = arr[i] - buy;
            maxProfit = max(maxProfit, cost);
            buy = min(buy, arr[i]);
        }

        return maxProfit;
        
    }
};