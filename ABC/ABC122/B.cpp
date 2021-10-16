#include <iostream>
using namespace std;

int main() {
    const char ACGT[4] = {'A', 'C', 'G', 'T'};
    string S;
    cin >> S;
    int N = S.size();

    int ans = 0;
    int match = 0;
    for(int i = 0; i < N; ++i) {
        bool flag = false;
        for(int j = 0; j < 4; ++j) {
            if(S[i] == ACGT[j]) flag = true;
        }
        if(flag) {
            ++match;
        } else {
            match = 0;
        }
        ans = max(ans, match);
    }
    cout << ans << endl;

    return 0;
}