#include <iostream>
using namespace std;

int main() {
    int W, H, N;
    cin >> W >> H >> N;

    int x_min = 0, x_max = W;
    int y_min = 0, y_max = H;
    for(int i = 0; i < N; ++i) {
        int x, y, a;
        cin >> x >> y >> a;
        if(a == 1) {
            x_min = max(x_min, x);
        } else if(a == 2) {
            x_max = min(x_max, x);
        } else if(a == 3) {
            y_min = max(y_min, y);
        } else if(a == 4) {
            y_max = min(y_max, y);
        }
    }

    int w = x_max - x_min;
    int h = y_max - y_min;
    if(w <= 0 || h <= 0) {
        cout << 0 << endl;
        return 0;
    }
    cout << w * h << endl;

    return 0;
}