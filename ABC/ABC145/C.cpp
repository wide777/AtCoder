#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int x[N], y[N];
    int a[N];
    for(int i = 0; i < N; ++i) {
        cin >> x[i] >> y[i];
        a[i] = i;
    }

    double tot = 0;
    int cnt = 0;
    do {
        for(int i = 0; i < N - 1; ++i) {
            tot += sqrt((x[a[i + 1]] - x[a[i]]) * (x[a[i + 1]] - x[a[i]]) +
                        (y[a[i + 1]] - y[a[i]]) * (y[a[i + 1]] - y[a[i]]));
        }
        ++cnt;
    } while(next_permutation(a, a + N));

    cout << fixed << setprecision(10);
    cout << tot / cnt << endl;
    return 0;
}