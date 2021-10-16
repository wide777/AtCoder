#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    int road[N] = {0};

    for(int i = 0; i < M; ++i) {
        int a, b;
        cin >> a >> b;
        --a, --b;
        ++road[a], ++road[b];
    }

    for(int i = 0; i < N; ++i) cout << road[i] << endl;

    return 0;
}