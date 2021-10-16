#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int N;
    cin >> N;

    ll ans = 0;
    unordered_map<int, int> Map;
    for(int i = 0; i < N; i++) {
        ll A, dif = i;
        cin >> A;
        if(Map.count(A)) dif -= Map[A];
        Map[A]++;
        ans += dif;
    }

    cout << ans << endl;
}