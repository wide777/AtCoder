#include <algorithm>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    int R[N];
    for(auto &i : R) cin >> i;

    sort(R, R + N);
    double C = 0;
    for(int i = N - K; i < N; ++i) {
        C = (C + R[i]) / 2;
    }
    cout << fixed << setprecision(10) << C << endl;

    return 0;
}