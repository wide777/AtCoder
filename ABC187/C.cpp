#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define REP(i, n) for(int i = 0; i < (int)(n); i++)
#define ALL(x) (x).begin(), (x).end()

static const int MOD = 1000000007;
static const int INF = (1 << 30);

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    unordered_set<string> us;
    REP(i, n) {
        cin >> s[i];
        us.insert(s[i]);
    }

    REP(i, n) {
        if(s[i][0] != '!' && us.count('!' + s[i])) {
            cout << s[i] << endl;
            return 0;
        }
    }
    cout << "satisfiable" << endl;
}