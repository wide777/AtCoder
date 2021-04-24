#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> h(n);
    REP(i, n) cin >> h[i];

    int res = 0;
    for(int i = 0; i < n; i++) {
        bool canSee = true;
        for(int j = 0; j < i; j++) {
            if(h[i] < h[j]) {
                canSee = false;
                break;
            }
        }
        if(canSee) res++;
    }
    cout << res << endl;
}