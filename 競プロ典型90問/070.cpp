#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    // 入力
    ll N;
    cin >> N;
    vector<ll> X(N), Y(N);
    REP(i, N) cin >> X[i] >> Y[i];

    // XY軸の中央値の計算
    sort(X.begin(), X.end());
    sort(Y.begin(), Y.end());
    ll cent_X, cent_Y;
    if(N % 2 == 0) {
        cent_X = (X[N / 2] + X[(N + 1) / 2]) / 2;
        cent_Y = (Y[N / 2] + Y[(N + 1) / 2]) / 2;
    } else {
        cent_X = X[N / 2];
        cent_Y = Y[N / 2];
    }

    // 中央値と各点とのマンハッタン距離を求める
    ll ans = 0;
    REP(i, N) ans += (abs(X[i] - cent_X) + abs(Y[i] - cent_Y));
    cout << (ll)ans << endl;
}