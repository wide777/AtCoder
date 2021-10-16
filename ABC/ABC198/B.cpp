#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define REP(i, n) for(int i = 0; i < (int)(n); i++)
#define ALL(x) (x).begin(), (x).end()

static const int MOD = 1000000007;
static const int INF = (1 << 30);

int main() {
    string n;
    cin >> n;
    int cnt = 0;
    for(int i = n.size() - 1; 0 <= i && n[i] == '0'; i--) cnt++;
    REP(i, cnt) n = '0' + n;
    int snum = n.size();

    string f = "", s = "";
    for(int i = snum / 2 - 1; 0 <= i; i--) f = f + n[i];
    if(snum % 2 == 0) {
        for(int i = snum / 2; i < snum; i++) s = s + n[i];
    } else {
        for(int i = snum / 2 + 1; i < snum; i++) s = s + n[i];
    }

    if(f == s) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}