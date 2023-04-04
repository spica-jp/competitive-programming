#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, X, Y;
    cin >> N >> X >> Y;

    vector<int> A(N);
    A.at(0) = X;
    A.at(1) = Y;

    for (int i = 2; i < N; i++) {
        A.at(i) = (A.at(i - 1) + A.at(i - 2)) % 100;
    }

    cout << A.at(N - 1) << endl;

    return 0;
}