#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin >> T;
    while(T--)
    {
        int N;
        cin >> N;
        int countOdd = 0;
        for(int i = 0; i < N; i++)
        {
            int A;
            cin >> A;
            if(A % 2) countOdd++;
        }
        
        if(countOdd % 2) cout << "No" << endl;
        else cout << "Yes" << endl;
    }
}