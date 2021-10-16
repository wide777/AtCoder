#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    set<string> s;
    vector<string> w(n);
    REP(i, n) {
        cin >> w[i];
        if((i && w[i - 1].back() != w[i].front()) || s.count(w[i])) {
            cout << "No" << endl;
            return 0;
        }
        s.insert(w[i]);
    }
    cout << "Yes" << endl;
    return 0;
}