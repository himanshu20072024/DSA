#include<bits/stdc++.h>
using namespace std;

int main() {
  string S;
  getline(cin, S);
  if(S[0] == S[S.size()-1])
    cout << "Yes";
  else cout << "No";
}