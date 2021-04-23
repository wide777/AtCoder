#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

static const int INF = (1 << 30);

int main() {
    ll x;
    cin >> x;
    cout << 100 - x % 100 << endl;
}