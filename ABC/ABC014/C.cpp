#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    const int COLOR = 1000001;
    int table[COLOR + 1] = {0};
    for(int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        ++table[a], --table[b + 1];
    }
    for(int i = 0; i < COLOR; ++i) table[i + 1] += table[i];

    int ans = 0;
    for(int i = 0; i <= COLOR; ++i) ans = max(ans, table[i]);
    cout << ans << endl;

    return 0;
}