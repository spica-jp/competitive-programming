#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> ans(N + 1);

    ans.at(0) = 1;
    ans.at(1) = 1;
    for (int i = 2; i <= N; i++) {
        ans.at(i) = ans.at(i - 1) + ans.at(i - 2);
    }

    cout << ans.at(N) << endl;
}