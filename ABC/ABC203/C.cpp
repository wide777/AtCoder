#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    ll N, K;
    cin >> N >> K;
    vector<pair<ll, ll> > X(N);
    REP(i, N) cin >> X[i].first >> X[i].second;

    sort(X.begin(), X.end());

    ll money = K;
    REP(i, N) {
        if(money >= X[i].first) money += X[i].second;
    }
    cout << money << endl;
}