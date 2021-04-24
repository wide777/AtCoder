#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    ll n;
    cin >> n;
    vector<pair<ll, ll> > ba(n);
    REP(i, n) cin >> ba[i].second >> ba[i].first;

    sort(ba.begin(), ba.end());
    ll a = 0, b;
    REP(i, n) {
        a += ba[i].second;
        b = ba[i].first;
        if(a > b) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}