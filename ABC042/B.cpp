#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int N, L;
    cin >> N >> L;
    string S[N];
    for(int i = 0; i < N; ++i) cin >> S[i];

    sort(S, S + N);
    for(int i = 0; i < N; ++i) cout << S[i];
    cout << endl;

    return 0;
}