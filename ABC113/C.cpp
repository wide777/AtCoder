#include <algorithm>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> P(M), Y(M);
    vector<vector<int>> v(N + 1);
    for(int i = 0; i < M; ++i) {
        cin >> P[i] >> Y[i];
        v[P[i]].push_back(Y[i]);
    }
    for(int i = 1; i <= N; ++i) {
        sort(v[i].begin(), v[i].end());
        v[i].erase(unique(v[i].begin(), v[i].end()), v[i].end());
    }

    for(int i = 0; i < M; ++i) {
        auto pos = lower_bound(v[P[i]].begin(), v[P[i]].end(), Y[i]);
        int idx = pos - v[P[i]].begin();
        cout << setfill('0') << right << setw(6);
        cout << P[i];
        cout << setfill('0') << right << setw(6);
        cout << idx + 1 << endl;
    }

    return 0;
}