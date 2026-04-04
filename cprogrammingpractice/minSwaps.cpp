class Solution {
    int swaps(vector<int>& arr) {
        int cnt = 0;
        for(auto it: arr) {
            if(it == 1) cnt++;
        }

        vector<int> dp(n);
        int a = 0;
        for(int i = 0; i < n; i++) {
            if(arr[i] == 1) {
                a++;
                dp[i] = a;
            }
        }

        int begin = 0, last = cnt-1;
        for(int i = 0; i < n-cnt+1; i++) {
            
        }
    }
};
