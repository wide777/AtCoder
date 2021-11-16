#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int N;
    cin >> N;
    int S[N];
    REP(i, N) cin >> S[i];

    set<int> s;
    for(int a = 1; a < 500; ++a) for(int b = 1; b < 500; ++b) {
        s.insert(4 * a * b + 3 * a + 3 * b);
    }

    int res = 0;
    REP(i, N) {
        if(!s.count(S[i])) ++res;
    }
    cout << res << endl;

    return 0;
}