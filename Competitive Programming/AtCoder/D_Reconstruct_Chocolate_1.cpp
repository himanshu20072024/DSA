// bruteforce method to solve this question !!!

#include<bits/stdc++.h>
using namespace std;

struct pieces {
    long long h;
    long long w;
};

int find_piece(vector<pieces>& peice, vector<bool>& used, long long H, long long W) {
    for(int i = 0; i < peice.size(); i++) {
        if(used[i]) continue;

        if(peice[i].h == H || peice[i].w == W) {
            return i;
        }
    }
    return -1;
}

void placePiece(int index, vector<pieces>& peice, vector<bool>& used, vector<pair<long long, long long>>& answer, long long& H, long long& W) {
    long long height = peice[index].h;
    long long width = peice[index].w;

    used[index] = true;

    answer[index].first = H-height+1;
    answer[index].second = W - width + 1;

    if(H == height) {
        W -= width;
    } else {
        H -= height;
    }
}

int main() {
    long long H, W, N;
    cin >> H >> W >> N;

    vector<pieces> peice(N);
    for(auto i = 0; i < N; i++) {
        cin >> peice[i].h >> peice[i].w;
    }

    vector<bool> used(N, false);

    vector<pair<long long, long long>> answer(N);
    for(auto start = 0; start < N; start++) {
        auto index = find_piece(peice, used, H, W);

        placePiece(index, peice, used, answer, H, W);
    }

    for(int i = 0; i < N; i++) {
        cout << answer[i].first << " " << answer[i].second << "\n";
    }

}