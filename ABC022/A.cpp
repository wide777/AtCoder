#include <iostream>
using namespace std;

int main() {
    long long N, S, T, W;
    cin >> N >> S >> T >> W;

    int ans = (S <= W && W <= T) ? 1 : 0;
    for(int i = 1; i < N; ++i) {
        int A;
        cin >> A;
        W += A;
        if(S <= W && W <= T) ++ans;
    }
    cout << ans << endl;

    return 0;
}