#include <iostream>
using namespace std;

int main() {
    int T, N;
    cin >> T >> N;
    int A[N];
    for(auto &i : A) cin >> i;
    int M;
    cin >> M;
    int B[M];
    for(auto &i : B) cin >> i;

    int j = 0;
    for(int i = 0; i < M; ++i, ++j) {
        while(j < N && B[i] < A[j]) ++j;
        while(j < N && A[j] + T < B[i]) ++j;
        if(j == N) {
            puts("no");
            return 0;
        }
    }
    puts("yes");

    return 0;
}