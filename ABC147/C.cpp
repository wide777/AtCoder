#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<pair<int, int>> T[N];
    int A[N];
    for(int i = 0; i < N; ++i) {
        cin >> A[i];
        for(int j = 0; j < A[i]; ++j) {
            int x, y;
            cin >> x >> y;
            T[i].push_back({x - 1, y});
        }
    }

    int ans = 0;
    for(int bit = 0; bit < (1 << N); ++bit) {
        int cnt = 0;
        bool flag = true;
        for(int i = 0; i < N; ++i) {
            if((bit & (1 << i)) == 0) continue;
            ++cnt;
            for(int j = 0; j < A[i]; ++j) {
                if(((bit >> T[i][j].first) & 1) != T[i][j].second) {
                    flag = false;
                }
            }
        }
        if(flag) ans = max(ans, cnt);
    }
    cout << ans << endl;

    return 0;
}