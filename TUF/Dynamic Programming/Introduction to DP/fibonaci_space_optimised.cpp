#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n;

    if(n == 0 ) {
        return 0;
    }

    int prev1 = 0;
    int prev = 1;
    for(int i = 2; i <= n; i++) {
        int curri = prev + prev1;
        prev1 = prev;
        prev = curri;
    }

    cout << prev;
}

// time complexity: O(n)
// space complexity: O(1)