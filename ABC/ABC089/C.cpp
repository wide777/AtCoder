#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<char> march = {'M', 'A', 'R', 'C', 'H'};
    vector<ll> cnt(5, 0);
    REP(i, n) {
        string s;
        cin >> s;
        REP(j, 5) {
            if(s[0] == march[j]) cnt[j]++;
        }
    }

    ll res = 0;
    for(int i = 0; i < 3; i++) {
        for(int j = i + 1; j < 4; j++) {
            for(int k = j + 1; k < 5; k++) {
                res += cnt[i] * cnt[j] * cnt[k];
            }
        }
    }
    cout << res << endl;
}