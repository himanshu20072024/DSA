#include <bits/stdc++.h>
using namespace std;

int main() {
	int input;
	cin >> input;
	
	// first scheme 
	int pay1 = 100 + 4*input;
	
	// second scheme
	if(pay1 <= 300) cout << pay1;
	else cout << 300;

}
