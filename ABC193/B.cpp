#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

const int MOD = 1000000007;
const int INTMAX = 2147483647;

int main() {
    int n;
    cin >> n;
    vector<int> a(n), p(n), x(n);
    rep(i, n) cin >> a.at(i) >> p.at(i) >> x.at(i);

    int money = INTMAX;
    rep(i, n) {
        if((x.at(i) - a.at(i) > 0) && (money > p.at(i))) money = p.at(i);
    }

    if(money == INTMAX) {
        cout << "-1" << endl;
    } else {
        cout << money << endl;
    }
}