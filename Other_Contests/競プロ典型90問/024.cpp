#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n, k;
    cin >> n >> k;
    int sum = 0;
    vector<int> a(n), b(n);
    REP(i, n) cin >> a[i];
    REP(i, n) cin >> b[i];
    REP(i, n) sum += abs(a[i] - b[i]);

    if(sum > k) {
        puts("No");
    } else {
        if((sum - k) % 2) {
            puts("No");
        } else {
            puts("Yes");
        }
    }
}