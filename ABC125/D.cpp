#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int A[N];
    int minus_cnt = 0;
    int minA = 1e9;
    long long sum = 0;
    for(int i = 0; i < N; ++i) {
        cin >> A[i];
        if(A[i] < 0) ++minus_cnt;
        minA = min(minA, abs(A[i]));
        sum += abs(A[i]);
    }

    if(minus_cnt % 2 == 1) sum -= minA * 2;
    cout << sum << endl;

    return 0;
}