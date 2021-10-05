#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

template <typename T>
vector<T> compress(vector<T> &X) {
    vector<T> vals = X;

    sort(vals.begin(), vals.end());
    vals.erase(unique(vals.begin(), vals.end()), vals.end());
    for(int i = 0; i < (int)X.size(); i++) {
        X[i] = lower_bound(vals.begin(), vals.end(), X[i]) - vals.begin();
    }

    return vals;
}

int main() {
    int N;
    cin >> N;
    vector<int> X(2 * N);
    for(int i = 0; i < N; ++i) {
        int A, B;
        cin >> A >> B;
        B += A;
        X[2 * i] = A;
        X[2 * i + 1] = B;
    }

    vector<int> vals = compress(X);
    vector<int> table(2 * N + 1, 0);
    for(int i = 0; i < N; ++i) {
        table[X[2 * i]] += 1;
        table[X[2 * i + 1]] -= 1;
    }

    for(int i = 1; i < 2 * N; ++i) {
        table[i] += table[i - 1];
    }

    vector<long long> D(N + 1, 0);
    vals.push_back(2e9); // 番兵
    for(int i = 0; i < (int)vals.size() - 1; ++i) {
        D[table[i]] += vals[i + 1] - vals[i];
    }

    for(int i = 1; i <= N; ++i) {
        if(i != 1) cout << " ";
        cout << D[i];
    }
    cout << endl;

    return 0;
}