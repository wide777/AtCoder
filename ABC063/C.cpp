#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int s[N];
    for(int i = 0; i < N; ++i) cin >> s[i];

    int sum = 0;
    for(int i = 0; i < N; ++i) sum += s[i];

    int ans = (sum % 10 == 0) ? 0 : sum;
    for(int i = 0; i < N; ++i) {
        if((sum - s[i]) % 10 == 0) continue;
        ans = max(ans, sum - s[i]);
    }
    cout << ans << endl;

    return 0;
}