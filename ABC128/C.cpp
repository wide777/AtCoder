#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> p(M);
    vector<vector<bool>> S(M, vector<bool>(11, false));
    for(int i = 0; i < M; ++i) {
        int k;
        cin >> k;
        for(int j = 0; j < k; ++j) {
            int s;
            cin >> s;
            S[i][s] = true;
        }
    }
    for(int i = 0; i < M; ++i) cin >> p[i];

    int ans = 0;
    for(int bit = 0; bit < (1 << N); ++bit) {
        bool flag = true;
        for(int i = 0; i < M; ++i) {
            int f = 0;
            for(int j = 0; j < N; ++j) {
                if((bit & (1 << j)) == 0) continue;
                if(S[i][j + 1]) ++f;
            }
            if(f % 2 != p[i]) flag = false;
        }
        if(flag) ++ans;
    }
    cout << ans << endl;

    return 0;
}