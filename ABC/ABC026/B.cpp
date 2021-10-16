#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int R[N];
    for(int i = 0; i < N; ++i) cin >> R[i];
    sort(R, R + N);

    const double PI = acos(-1);
    int mod = N % 2;
    double ans = 0;
    for(int i = N - 1; 0 <= i; --i) {
        if(i % 2 == mod) {
            ans -= R[i] * R[i];
        } else {
            ans += R[i] * R[i];
        }
    }
    ans *= PI;
    cout << fixed << setprecision(10) << ans << endl;

    return 0;
}