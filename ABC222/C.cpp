#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int janken(char a, char b) {
    if(a == 'G') {
        if(b == 'G') return 0;
        if(b == 'C') return 1;
        if(b == 'P') return -1;
    }
    if(a == 'C') {
        if(b == 'G') return -1;
        if(b == 'C') return 0;
        if(b == 'P') return 1;
    }
    if(a == 'P') {
        if(b == 'G') return 1;
        if(b == 'C') return -1;
        if(b == 'P') return 0;
    }
    return 0;
}

int main() {
    int N, M;
    cin >> N >> M;
    char A[2 * N][M];
    REP(i, 2 * N) REP(j, M) cin >> A[i][j];

    vector<pair<int, int>> vp(2 * N);
    REP(i, 2 * N) {
        vp[i].first = 0;
        vp[i].second = i;
    }

    vector<pair<int, int>> cvp = vp;
    REP(i, M) {
        REP(k, N) {
            int a = cvp[2 * k].second;
            int b = cvp[2 * k + 1].second;
            int res = janken(A[a][i], A[b][i]);
            if(res == 1) {
                --vp[a].first;
            } else if(res == -1) {
                --vp[b].first;
            }
        }
        cvp = vp;
        sort(cvp.begin(), cvp.end());
    }
    for(auto i : cvp) cout << i.second + 1 << endl;

    return 0;
}