#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> p(n), q(n);
    REP(i, n) cin >> p[i];
    REP(i, n) cin >> q[i];

    int cnt = 0, pnum, qnum;
    vector<int> vi(n);
    iota(vi.begin(), vi.end(), 1);
    do {
        cnt++;
        if(vi == p) pnum = cnt;
        if(vi == q) qnum = cnt;

    } while(next_permutation(vi.begin(), vi.end()));

    cout << abs(pnum - qnum) << endl;
}