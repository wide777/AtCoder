#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> cnt(n, 0);
    vector<bool> vb(n, false);
    REP(i, m) {
        int p;
        string s;
        cin >> p >> s;
        p--;
        if(vb[p] == false) {
            if(s == "AC") {
                vb[p] = true;
            } else if(s == "WA") {
                cnt[p]++;
            }
        }
    }

    int ans = 0, pena = 0;
    REP(i, n) {
        if(vb[i] == true) {
            ans++;
            pena += cnt[i];
        }
    }
    cout << ans << " " << pena << endl;
}