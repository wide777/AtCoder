#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int x[N], y[N], h[N];
    for(int i = 0; i < N; ++i) cin >> x[i] >> y[i] >> h[i];

    for(int Cx = 0; Cx <= 100; ++Cx) {
        for(int Cy = 0; Cy <= 100; ++Cy) {
            int H = 1;
            for(int i = 0; i < N; ++i) {
                if(h[i] > 0) H = h[i] + abs(x[i] - Cx) + abs(y[i] - Cy);
            }
            bool flag = true;
            for(int i = 0; i < N; ++i) {
                if(max(H - abs(x[i] - Cx) - abs(y[i] - Cy), 0) != h[i]) {
                    flag = false;
                    break;
                }
            }
            if(flag) {
                cout << Cx << " " << Cy << " " << H << endl;
                return 0;
            }
        }
    }

    return 0;
}