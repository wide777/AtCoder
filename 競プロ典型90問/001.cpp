#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n, l, k;
    cin >> n >> l >> k;
    vector<int> a(n + 1), s(n + 1);
    REP(i, n) cin >> a[i];
    a[n] = l;
    s[0] = a[0];
    for(int i = 1; i <= n; i++) s[i] = a[i] - a[i - 1];

    int left = 0, right = l + 1;
    while(right > left + 1) {
        int mid = (left + right) / 2;
        int sum = 0, cnt = -1;
        REP(i, n + 1) {
            sum += s[i];
            if(sum >= mid) {
                sum = 0;
                cnt++;
            }
        }
        if(cnt < k) {
            right = mid;
        } else {
            left = mid;
        }
    }
    cout << left << endl;
}