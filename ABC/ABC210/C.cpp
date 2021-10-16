#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> c(N);
    for(auto &i : c) cin >> i;

    unordered_map<int, int> Map;
    REP(i, K) { Map[c[i]]++; }

    int ans = Map.size();
    for(int i = K, j = 0; i < N; i++, j++) {
        Map[c[i]]++;
        Map[c[j]]--;
        if(Map.at(c[j]) == 0) Map.erase(c[j]);
        ans = max(ans, (int)Map.size());
    }
    cout << ans << endl;
}