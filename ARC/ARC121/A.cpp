#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    ll N;
    cin >> N;
    vector<pair<ll, ll> > x(N), y(N);
    REP(i, N) {
        cin >> x[i].first >> y[i].first;
        x[i].second = y[i].second = i;
    }

    sort(x.begin(), x.end());
    sort(y.begin(), y.end());

    vector<ll> z(4);
    z[0] = abs(x[0].first - x[N - 1].first);
    z[1] = abs(y[0].first - y[N - 1].first);
    z[2] =
        max(abs(x[0].first - x[N - 2].first), abs(x[1].first - x[N - 1].first));
    z[3] =
        max(abs(y[0].first - y[N - 2].first), abs(y[1].first - y[N - 1].first));

    if(!((x[0].second == y[0].second) &&
         (x[N - 1].second == y[N - 1].second)) &&
       !((x[0].second == y[N - 1].second) &&
         (x[N - 1].second == y[0].second))) {
        sort(z.begin(), z.end());
        cout << z[2] << endl;
    } else {
        if(z[1] <= z[2]) {
            cout << z[2] << endl;
        } else if(z[0] <= z[3]) {
            cout << z[3] << endl;
        } else {
            cout << max(z[2], z[3]) << endl;
        }
    }
}