#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    string S;
    int N;
    cin >> S >> N;

    for(int i = 0; i < N; ++i) {
        int l, r;
        cin >> l >> r;
        --l, --r;
        string S1 = S.substr(0, l);
        string S2 = S.substr(l, r - l + 1);
        string S3 = S.substr(r + 1);
        reverse(S2.begin(), S2.end());
        S = S1 + S2 + S3;
    }
    cout << S << endl;

    return 0;
}