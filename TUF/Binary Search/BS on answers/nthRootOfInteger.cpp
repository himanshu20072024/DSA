#include <bits/stdc++.h>
using namespace std;

long long func(int mid, int root, int n) {
    long long ans = 1;
    for (int i = 0; i < root; i++) {
        ans *= mid;
        if (ans > n) return ans; // stop early
    }
    return ans;
}

int main() {
    int n, m;
    cout << "Enter n : ";
    cin >> n;
    cout << "Enter root which you want to find : ";
    cin >> m;

    int low = 1, high = n, result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        long long value = func(mid, m, n);

        if (value == n) {
            result = mid;
            break;
        } else if (value > n) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << result;
    return 0;
}
