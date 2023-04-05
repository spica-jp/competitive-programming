#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N), t(N);
    for (int i = 0; i < N; i++) {
        cin >> A.at(i);
    }

    t.at(0) = 0;
    t.at(1) = A.at(1);

    for (int i = 2; i < N; i++) {
        t.at(i) = min(t.at(i - 1) + A.at(i), t.at(i - 2) + A.at(i) * 2);
    }

    cout << t.at(N - 1) << endl;
}