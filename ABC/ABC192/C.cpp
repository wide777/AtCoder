#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

static const int MAX = 100000;

ll f(ll x) {
    string s = to_string(x);
    sort(all(s));

    int g2 = stoi(s);

    sort(all(s), greater<int>());

    int g1 = stoi(s);

    return g1 - g2;
}

int main() {
    int n, k, a;
    cin >> n >> k;
    a = n;

    rep(i, k) a = f(a);

    cout << a << endl;
}