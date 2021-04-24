#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    rep(i, N) cin >> A.at(i);

    unsigned long long steps = 0;
    rep(i, N - 1) {
        if(A.at(i) > A.at(i + 1)) {
            steps += A.at(i) - A.at(i + 1);
            A.at(i + 1) = A.at(i);
        }
    }
    cout << steps << endl;
}
