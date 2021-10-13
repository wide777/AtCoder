#include <atcoder/modint>
#include <iostream>
using namespace atcoder;
using namespace std;
using mint = modint1000000007;

int main() {
    int N;
    cin >> N;
    int A[N];
    int cnt[100000] = {0};
    for(int i = 0; i < N; ++i) {
        cin >> A[i];
        ++cnt[A[i]];
    }

    mint ans = 1;
    for(int i = ((N % 2) ? 0 : 1); i < N; i += 2) {
        if((i == 0 && cnt[i] != 1) || (i != 0 && cnt[i] != 2)) {
            cout << 0 << endl;
            return 0;
        }
        ans *= cnt[i];
    }
    cout << ans.val() << endl;

    return 0;
}