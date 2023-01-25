#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, l;
    string S;
    cin >> N >> S;

    for (int i = 0; i < N - 1; i++) {
        bool flag = false;
        for (l = 0; l <= N - i; l++) {
            for (int k = 0; k <= l; k++) {
                if (S.at(k) != S.at(k + i)) {
                    flag = true;
                }
                if (flag == true) {
                    break;
                }
            }
            if (flag == true) {
                break;
            }
        }
        cout << l << endl;
    }
}