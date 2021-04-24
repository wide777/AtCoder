#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<char> c(n);
    int rcnt = 0;
    REP(i, n) {
        cin >> c[i];
        if(c[i] == 'R') rcnt++;
    }

    int res = 0;
    REP(i, rcnt) {
        if(c[i] != 'R') res++;
    }
    cout << res << endl;
}