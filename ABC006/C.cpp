#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    if(M < 2 * N || 4 * N < M) {
        cout << -1 << " " << -1 << " " << -1 << endl;
        return 0;
    }

    int baby = 0, adult = N, old = 0;
    if(3 * adult <= M) {
        old = M - 3 * adult;
        adult -= old;
    } else {
        baby = 3 * adult - M;
        adult -= baby;
    }
    cout << baby << " " << adult << " " << old << endl;

    return 0;
}