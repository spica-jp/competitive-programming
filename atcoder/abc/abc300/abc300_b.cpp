#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    bool match_A_B = false;
    cin >> H >> W;
    vector<vector<char>> A(H, vector<char>(W)), B(H, vector<char>(W));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> A.at(i).at(j);
        }
    }
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> B.at(i).at(j);
        }
    }

    for (int s = 0; s < H; s++) {
        for (int t = 0; t < W; t++) {
            match_A_B = true;
            for (int i = 0; i < H; i++) {
                for (int j = 0; j < W; j++) {
                    if (A.at((i - s + H) % H).at((j - t + W) % W) != B.at(i).at(j)) {
                        match_A_B = false;
                    }
                }
            }
            if (match_A_B) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
}