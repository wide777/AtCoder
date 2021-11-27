#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int N;
vector<long long> H, S;

bool isOK(long long X) {
    vector<pair<long long, long long>> A(N);
    for(int i = 0; i < N; ++i) {
        A[i].first = (X - H[i]) / S[i];
        A[i].second = i;
    }
    sort(A.begin(), A.end());
    for(int i = 0; i < N; ++i) {
        int id = A[i].second;
        if(X < H[id] + i * S[id]) {
            return false;
        }
    }
    return true;
}

long long binary_search() {
    long long left = 0;
    long long right = 1LL << 60;
    while(abs(left - right) > 1) {
        long long mid = (left + right) / 2;
        if(isOK(mid)) {
            right = mid;
        } else {
            left = mid;
        }
    }
    return right;
}

int main() {
    cin >> N;
    H.resize(N);
    S.resize(N);
    for(int i = 0; i < N; ++i) cin >> H[i] >> S[i];

    cout << binary_search() << endl;
    return 0;
}