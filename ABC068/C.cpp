#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Step1: Input
    int N, M;
    cin >> N >> M;

    // Step2: Make a graph
    vector<vector<int>> to(N);
    for(int i = 0; i < M; ++i) {
        int a, b;
        cin >> a >> b;
        --a, --b;
        to[a].push_back(b);
    }

    // Step3: Output
    for(int v : to[0]) {
        for(int dist : to[v]) {
            if(dist == N - 1) {
                puts("POSSIBLE");
                return 0;
            }
        }
    }
    puts("IMPOSSIBLE");

    return 0;
}