#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int txa, tya, txb, tyb, T, V, n;
    cin >> txa >> tya >> txb >> tyb >> T >> V >> n;

    int move_max = (T * V);
    for(int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        double d1 = sqrt((x - txa) * (x - txa) + (y - tya) * (y - tya));
        double d2 = sqrt((x - txb) * (x - txb) + (y - tyb) * (y - tyb));
        if(d1 + d2 <= move_max) {
            puts("YES");
            return 0;
        }
    }
    puts("NO");

    return 0;
}