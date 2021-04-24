#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<pair<pair<string, int>, int> > p(n);
    REP(i, n) {
        cin >> p[i].first.first >> p[i].first.second;
        p[i].first.second = -p[i].first.second;
        p[i].second = i + 1;
    }
    sort(p.begin(), p.end());
    REP(i, n) cout << p[i].second << endl;
}