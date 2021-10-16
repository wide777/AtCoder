#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    vector<int> x(5);
    REP(i, 5) cin >> x[i];
    int k;
    cin >> k;
    for(int i = 0; i < 4; i++) {
        for(int j = i + 1; j < 5; j++) {
            if(x[j] - x[i] > k) {
                cout << ":(" << endl;
                return 0;
            }
        }
    }
    cout << "Yay!" << endl;
    return 0;
}