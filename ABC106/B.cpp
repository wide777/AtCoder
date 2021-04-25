#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    int res = 0;
    for(int i = 1; i <= n; i += 2) {
        int cnt = 0;
        for(int j = 1; j * j <= i; j++) {
            if(i % j == 0) {
                cnt++;
                if(j * j != i) cnt++;
            }
        }
        if(cnt == 8) res++;
    }
    cout << res << endl;
}