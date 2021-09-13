#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

void solve(ll n) {
    string ans = "";
    while(n != 1) {
        if(n % 2 == 1) {
            ans = "BA" + ans;
        } else {
            ans = "B" + ans;
        }
        n /= 2;
    }
    ans = 'A' + ans;
    cout << ans << endl;
}

int main() {
    ll N;
    cin >> N;

    solve(N);
    return 0;
}