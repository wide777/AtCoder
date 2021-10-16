#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    map<int, ll> m;
    REP(i, n) {
        int a;
        cin >> a;
        while(a > 0) {
            if(a % 2 == 0) {
                m[i]++;
                a /= 2;
            } else {
                break;
            }
        }
    }
    ll res = 0;
    for(auto [id, v] : m) res += v;
    cout << res << endl;
}