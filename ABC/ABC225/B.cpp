#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int N;
    cin >> N;
    int cnt[N + 1] = {0};
    REP(i, N - 1) {
        int a, b;
        cin >> a >> b;
        ++cnt[a], ++cnt[b];
    }

    bool flag = false;
    REP(i, N + 1) {
        if(cnt[i] == N - 1) flag = true;
    }

    if(flag) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}