#include <iostream>
#include <numeric>
using namespace std;

int main() {
    // Step1: Input
    int N;
    cin >> N;
    long long T[N];
    for(int i = 0; i < N; ++i) cin >> T[i];

    // Step2: Calculate LCM
    long long ans = 1;
    for(int i = 0; i < N; ++i) ans = lcm(ans, T[i]);

    // Step3: Output
    cout << ans << endl;

    return 0;
}