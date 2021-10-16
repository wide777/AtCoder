#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define COMMA1 1000
#define COMMA2 1000000
#define COMMA3 1000000000
#define COMMA4 1000000000000
#define COMMA5 1000000000000000

static const int MOD = 1000000007;
static const int INF = (1 << 30);

int main() {
    string n;
    cin >> n;
    int len = n.size();
    ll x = stoll(n);
    ll res = 0;

    if(len < 4) {
        cout << 0 << endl;
    } else if(len < 7) {
        cout << x - COMMA1 + 1 << endl;
    } else if(len < 10) {
        cout << (x - COMMA2 + 1) * 2 + (COMMA2 - COMMA1) << endl;
    } else if(len < 13) {
        cout << (x - COMMA3 + 1) * 3 + (COMMA3 - COMMA2) * 2 + (COMMA2 - COMMA1)
             << endl;
    } else if(len < 16) {
        cout << (x - COMMA4 + 1) * 4 + (COMMA4 - COMMA3) * 3 +
                    (COMMA3 - COMMA2) * 2 + (COMMA2 - COMMA1)
             << endl;
    } else {
        cout << 5 + (COMMA5 - COMMA4) * 4 + (COMMA4 - COMMA3) * 3 +
                    (COMMA3 - COMMA2) * 2 + (COMMA2 - COMMA1)
             << endl;
    }
}