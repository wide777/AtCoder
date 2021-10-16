#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    sort(a, a + n);

    double r = a[n - 1] / 2.0;
    int m = 1e9 + 7;
    int ans = 0;
    for(int i = 0; i < n; ++i) {
        if(abs(r - a[i]) < m) {
            m = abs(r - a[i]);
            ans = a[i];
        }
    }
    cout << a[n - 1] << " " << ans << endl;

    return 0;
}