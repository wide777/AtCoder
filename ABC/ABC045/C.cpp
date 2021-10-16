#include <iostream>
using namespace std;

int main() {
    string S;
    cin >> S;
    int N = (int)S.size() - 1;

    long long ans = 0;
    for(int bit = 0; bit < (1 << N); ++bit) {
        string x = {S[0]};
        for(int i = 0; i < N; ++i) {
            if(bit & (1 << i)) {
                ans += stoll(x);
                x = {S[i + 1]};
            } else {
                x += S[i + 1];
            }
        }
        ans += stoll(x);
    }
    cout << ans << endl;

    return 0;
}