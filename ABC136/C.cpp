#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> h(n);
    REP(i, n) cin >> h[i];

    string ans = "Yes";
    for(int i = n - 2; 0 <= i; i--) {
        if(h[i] - 1 > h[i + 1]) {
            ans = "No";
            break;
        } else if(h[i] - 1 == h[i + 1]) {
            h[i]--;
        }
    }
    cout << ans << endl;
}