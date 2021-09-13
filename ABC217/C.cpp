#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int N;
    cin >> N;
    vector<int> p(N);
    REP(i, N) {
        cin >> p[i];
        p[i]--;
    }

    vector<int> q(N);
    REP(i, N) q[p[i]] = i + 1;
    REP(i, N) {
        if(i != N - 1) {
            cout << q[i] << " ";
        } else
            cout << q[i] << endl;
    }

    return 0;
}