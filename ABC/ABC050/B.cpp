#include <iostream>
using namespace std;

int main() {
    int N, M, sum = 0;
    cin >> N;
    int T[N + 1];
    for(int i = 1; i <= N; ++i) {
        cin >> T[i];
        sum += T[i];
    }

    cin >> M;
    for(int i = 0; i < M; ++i) {
        int P, X;
        cin >> P >> X;
        cout << sum - T[P] + X << endl;
    }

    return 0;
}