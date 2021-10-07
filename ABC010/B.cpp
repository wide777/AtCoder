#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(auto &i : a) cin >> i;

    int ans = 0;
    for(int i = 0; i < n; ++i) {
        if(a[i] % 2 == 0) --a[i], ans += 1;
        if(a[i] == 5) ans += 2;
    }
    cout << ans << endl;

    return 0;
}