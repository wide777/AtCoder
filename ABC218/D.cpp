#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int N;
    cin >> N;
    vector<pair<int, int>> d(N);
    set<pair<int, int>> S;
    REP(i, N) {
        int x, y;
        cin >> x >> y;
        d[i] = make_pair(x, y);
        S.insert(make_pair(x, y));
    }

    sort(d.begin(), d.end());

    vector<vector<int>> dx(N), dy(N);
    for(int i = 0; i < N - 1; i++) {
        for(int j = i + 1; j < N; j++) {
            if(d[i].first == d[j].first) dx[i].push_back(j);
            if(d[i].second == d[j].second) dy[i].push_back(j);
        }
    }

    int ans = 0;
    REP(i, N) {
        for(auto idx : dx[i]) {
            for(auto idy : dy[i]) {
                if(S.count(make_pair(d[idy].first, d[idx].second))) ans++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}