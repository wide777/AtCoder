#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> cnt(n, 0);
    REP(i, n) {
        int a;
        cin >> a;
        a--;
        cnt[a]++;
    }
    sort(cnt.begin(), cnt.end(), greater<int>());

    int rm = 0;
    REP(i, k) rm += cnt[i];
    cout << n - rm << endl;
}