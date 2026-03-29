

int f(int day, int lastDay, vector<vector<int>> &points, vector<vector<int>>& dp) {
    if(day == 0) {
        int maxxxi = 0;
        for(int i = 0; i < 3; i++) {
            if(i != lastDay) {
                maxxxi = max(maxxxi, points[day][i]);
                
            }
        }
        return dp[day][lastDay] = maxxxi;
    }

    if(dp[day][lastDay] != -1) return dp[day][lastDay];
 
    int maxi = 0;
    for(int i = 0; i < 3; i++) {
        if(i != lastDay) {
            int curr = points[day][i] + f(day-1, i, points, dp);
            maxi = max(maxi, curr);
        }
    }
    return dp[day][lastDay] = maxi;
}
 

int ninjaTraining(int n, vector<vector<int>> &points)
{
    vector<vector<int>> dp(n, vector<int>(4, -1));
    return f(n-1, 3, points, dp);
}

// Tabulation
// time : O(N*4*3) = O(N)
// space : O(N*4) + O(N) = O(N)