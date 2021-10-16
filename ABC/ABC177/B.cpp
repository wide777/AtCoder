#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

int main() {
    string s, t;
    cin >> s >> t;

    int cnt = 0;
    int maxmatch = 0;
    rep(i, s.size() - t.size() + 1) {
        rep(j, t.size()) {
            if(s.at(i + j) == t.at(j)) cnt++;
        }
        if(cnt > maxmatch) maxmatch = cnt;
        cnt = 0;
    }
    cout << t.size() - maxmatch << endl;
}