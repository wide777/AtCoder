#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int h, w;
    cin >> h >> w;
    vector<vector<char> > a(h, vector<char>(w));
    vector<bool> vh(h, false), vw(w, false);
    REP(i, h) REP(j, w) {
        cin >> a[i][j];
        if(a[i][j] == '#') vh[i] = vw[j] = true;
    }

    REP(i, h) {
        if(!vh[i]) continue;
        REP(j, w) {
            if(vw[j]) cout << a[i][j];
        }
        cout << endl;
    }
}