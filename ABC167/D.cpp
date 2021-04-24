#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    REP(i, n) {
        cin >> a[i];
        a[i]--;
    }

    vector<ll> v = {0};
    vector<bool> visited(n, false);
    visited[0] = true;
    REP(i, n) {
        if(!visited[a[v[i]]]) {
            visited[a[v[i]]] = true;
            v.push_back(a[v[i]]);
        } else {
            v.push_back(a[v[i]]);
            break;
        }
    }

    ll id = 0;
    REP(i, v.size()) {
        if(v[i] == v.back()) {
            id = i;
            break;
        }
    }

    if(k < ((ll)v.size() - 1)) {
        cout << v[k] + 1 << endl;
    } else {
        cout << v[id + (k - id) % (v.size() - id - 1)] + 1 << endl;
    }
    return 0;
}