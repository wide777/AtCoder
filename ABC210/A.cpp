#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int N, A, X, Y;
    cin >> N >> A >> X >> Y;
    if(N > A) {
        cout << A * X + (N - A) * Y << endl;
    } else {
        cout << N * X << endl;
    }
}