#include <iostream>
using namespace std;

int main() {
    int N, T;
    cin >> N >> T;

    int t[N];
    for(int i = 0; i < N; ++i) cin >> t[i];

    long long sus = 0;
    for(int i = 1; i < N; ++i) {
        if(t[i] - t[i - 1] > T) {
            sus += t[i] - t[i - 1] - T;
        }
    }

    cout << t[N - 1] + T - sus << endl;

    return 0;
}