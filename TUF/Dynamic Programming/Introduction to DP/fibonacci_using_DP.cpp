#include<bits/stdc++.h>
using namespace std;

int fibo(int n, vector<int>& dp) {
    if(dp[n] != -1) {
        return dp[n];
    }

    if(n == 0 || n == 1) {
        dp[n] = n;
        return dp[n];
    }

    int fibo_N_1 = fibo(n-1, dp);
    int fibo_N_2 = fibo(n-2, dp);
    dp[n] = fibo_N_1 + fibo_N_2;

    return dp[n];
}

int main() {
    int n;
    cin >> n;

    vector<int> dp(n+1, -1);
    dp[0] = 0;
    dp[1] = 1;

    cout << fibo(n, dp);
}

// time complexity: O(n)
// space complexity: O(n) for dp array + O(n) for recursion stack = O(n)