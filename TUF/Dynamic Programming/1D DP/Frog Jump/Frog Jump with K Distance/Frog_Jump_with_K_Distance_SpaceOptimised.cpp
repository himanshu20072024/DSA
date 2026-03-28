#include <bits/stdc++.h>
using namespace std;

int frogJump(int n, int k, vector<int> &heights)
{
    vector<int> prev(k, INT_MAX);

    // Base case: dp[0] = 0
    prev[0] = 0;

    for(int i = 1; i < n; i++) {
        int minJump = INT_MAX;

        // Try all jumps from 1 to k
        for(int j = 1; j <= k; j++) {
            if(i - j >= 0 && prev[j-1] != INT_MAX) {
                int jump = prev[j-1] + abs(heights[i] - heights[i-j]);
                minJump = min(minJump, jump);
            }
        }

        // Shift the window
        for(int z = k - 1; z > 0; z--) {
            prev[z] = prev[z - 1];
        }

        // Insert new dp[i]
        prev[0] = minJump;
    }

    return prev[0]; // dp[n-1]
}

int main() {
    int n = 5, k = 2;
    vector<int> heights = {10, 20, 30, 10, 40};

    cout << frogJump(n, k, heights);

    return 0;
}

// time : O(n*k) where n is the number of stairs and k is the maximum jump distance
// space : O(k) for the prev array