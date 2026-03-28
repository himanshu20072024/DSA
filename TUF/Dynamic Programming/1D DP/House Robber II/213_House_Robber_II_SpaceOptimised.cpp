class Solution {
public:
    int robb(vector<int>& nums) {
        int n = nums.size();

        int prev = nums[0];
        int prev2 = 0;
        for(int i = 1; i < n; i++) {
            int rob = nums[i];
            if(i > 1) rob += prev2;
            int notRob = 0 + prev;
            int curri = max(rob, notRob);
            prev2 = prev;
            prev = curri;
        }

        return prev;
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        vector<int> temp1, temp2;
        for(int i = 0; i < n; i++) {
            if(i != 0) temp1.push_back(nums[i]);
            if(i != n-1) temp2.push_back(nums[i]);
        }

        return max(robb(temp1), robb(temp2));
    }
};