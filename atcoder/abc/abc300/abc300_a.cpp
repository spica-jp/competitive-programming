#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, A, B, ans;
    cin >> N >> A >> B;
    vector<int> C(N);
    for (int i = 0; i < N; i++) {
        cin >> C.at(i);
    }

    ans = A + B;
    for (int i = 0; i < N; i++) {
        if (ans == C.at(i)) {
            cout << i + 1 << endl;
            break;
        }
    }
}
