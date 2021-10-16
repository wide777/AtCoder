#include <iostream>
using namespace std;

int main() {
    int W, a, b;
    cin >> W >> a >> b;

    int m = min(a, b);
    int M = max(a, b);

    if(m + W >= M) {
        cout << 0 << endl;
        return 0;
    }
    cout << abs(m + W - M) << endl;

    return 0;
}