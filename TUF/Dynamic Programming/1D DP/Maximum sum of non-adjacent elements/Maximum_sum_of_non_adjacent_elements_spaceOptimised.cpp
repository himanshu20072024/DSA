#include <bits/stdc++.h> 
int maximumNonAdjacentSum(vector<int> &nums){
    int n = nums.size();

    int prev = nums[0];
    int prev2 = 0;

    for(int i = 1; i < n; i++) {
        int take = nums[i];
        if(i > 1) {
            take += prev2;
        }
        int notTake = 0 + prev;

        int curri = max(take, notTake);
        prev2 = prev;
        prev = curri;
    }

    return prev;
}

// time : O(N) where N is the size of the input array nums, since we are calculating the maximum sum for each index from 0 to N-1 once.
// space : O(1) since we are using only a constant amount of space to store the previous two values (prev and prev2) instead of using a dp array.