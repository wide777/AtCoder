#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n, k, q, a;
    cin >> n >> k >> q;
    vector<int> cnt(n, 0);
    REP(i, q) {
        cin >> a;
        a--;
        cnt[a]++;
    }

    REP(i, n) {
        if(k - q + cnt[i] > 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}