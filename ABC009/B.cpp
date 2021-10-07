#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int A[N];
    for(auto &i : A) cin >> i;
    sort(A, A + N, greater<>());

    int prev = A[0];
    for(int i = 1; i < N; ++i) {
        if(A[i] == prev) continue;
        cout << A[i] << endl;
        break;
    }

    return 0;
}