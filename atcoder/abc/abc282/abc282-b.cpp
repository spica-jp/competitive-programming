#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M, count = 0;
    cin >> N >> M;
    vector<string> S(N);
    for (int i = 0; i < N; i++) {
        cin >> S.at(i);
    }

    for (int i = 0; i < N - 1; i++) {
        bool flag = false;
        for (int j = i + 1; j < N; j++) {
            for (int k = 0; k < M; k++) {
                if (S.at(i).at(k) == 'x' && S.at(j).at(k) == 'x') {
                    flag = false;
                    break;
                } else {
                    flag = true;
                }
            }
            if (flag == true) {
                count++;
            }
        }
    }

    cout << count << endl;
}