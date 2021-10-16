#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    // Step1: Input
    int N;
    cin >> N;

    // Step2: Distribute cards to sunuke and arai
    int a[N];
    long long sunuke = 0, arai = 0;
    for(int i = 0; i < N; ++i) {
        cin >> a[i];
        arai += a[i];
    }
    sunuke += a[0];
    arai -= a[0];

    // Step3: Search min value of |sunuke - arai|
    long long ans = abs(sunuke - arai);
    for(int i = 1; i < N - 1; ++i) {
        sunuke += a[i];
        arai -= a[i];
        ans = min(ans, abs(sunuke - arai));
    }

    // Step4: Output
    cout << ans << endl;

    return 0;
}