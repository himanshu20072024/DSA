#include <bits/stdc++.h>
using namespace std;

struct Piece {
    long long h;
    long long w;
};

int findMatchingPiece(vector<Piece>& pieces, vector<bool>& used, long long H, long long W)
{
    for (int i = 0; i < pieces.size(); i++) {
        if (used[i]) continue;

        if (pieces[i].h == H || pieces[i].w == W) {
            return i;
        }
    }
    return -1; // should never happen (guaranteed valid input)
}

void placePiece(int index, vector<Piece>& pieces, vector<pair<long long,long long>>& answer, vector<bool>& used, long long& H, long long& W)
{
    long long h = pieces[index].h;
    long long w = pieces[index].w;

    // Place at bottom-right
    answer[index].first  = H - h + 1;
    answer[index].second = W - w + 1;

    used[index] = true;

    if (h == H) {
        // vertical cut
        W -= w;
    } else {
        // horizontal cut
        H -= h;
    }
}

int main()
{
    long long H, W;
    int N;

    cin >> H >> W >> N;

    vector<Piece> pieces(N);
    for (int i = 0; i < N; i++) {
        cin >> pieces[i].h >> pieces[i].w;
    }

    vector<bool> used(N, false);
    vector<pair<long long,long long>> answer(N);

    for (int step = 0; step < N; step++) {

        int index = findMatchingPiece(pieces, used, H, W);

        placePiece(index, pieces, answer, used, H, W);
    }

    for (int i = 0; i < N; i++) {
        cout << answer[i].first << " "
             << answer[i].second << "\n";
    }

    return 0;
}
