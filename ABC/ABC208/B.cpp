#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int P;
    cin >> P;
    vector<int> Coin(11, 1);
    for(int i = 1; i <= 10; i++) {
        Coin[i] = Coin[i - 1] * i;
    }

    int ans = 0;
    while(P > 0) {
        for(int i = 10; i >= 1; i--) {
            if(P >= Coin[i]) {
                P -= Coin[i];
                ans++;
                break;
            }
        }
    }
    cout << ans << endl;
}