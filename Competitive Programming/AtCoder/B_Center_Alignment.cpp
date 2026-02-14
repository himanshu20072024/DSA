#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    cin.ignore();  

    size_t max_size = 0;
    vector<string> str;

    while (N--) {
        string S;
        getline(cin, S);
        str.push_back(S);
        max_size = max(max_size, S.size());
    }

    for (size_t i = 0; i < str.size(); i++) {
        size_t size = str[i].size();
        size_t total = max_size - size;

        size_t left = total / 2;
        size_t right = total - left;  // ensures full width

        string T(left, '.');
        T += str[i];
        T += string(right, '.');

        cout << T << endl;
    }
}
