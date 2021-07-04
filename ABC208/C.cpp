#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    ll N, K;
    cin >> N >> K;
    vector<pair<ll, ll>> a(N);
    REP(i, N) {
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a.begin(), a.end());

    ll give_to_all = K / N;
    ll mod = K % N;
    vector<bool> f(N);
    REP(i, N) {
        if(mod > i) {
            f[a[i].second] = true;
        } else {
            f[a[i].second] = false;
        }
    }

    REP(i, N) {
        if(f[i]) {
            cout << give_to_all + 1 << endl;
        } else {
            cout << give_to_all << endl;
        }
    }
}