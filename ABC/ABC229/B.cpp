#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    string A, B;
    cin >> A >> B;

    int M = A.size();
    int N = B.size();

    if(M > N) {
        swap(A, B);
        swap(M, N);
    }

    B = B.substr(N - M, M);

    for(int i = 0; i < M; ++i) {
        int a = (int)(A[i] - '0');
        int b = (int)(B[i] - '0');
        if(a + b > 9) {
            puts("Hard");
            return 0;
        }
    }
    puts("Easy");

    return 0;
}