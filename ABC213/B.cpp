#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int N;
    cin >> N;
    vector<pair<int, int>> A(N);
    REP(i, N) {
        cin >> A[i].first;
        A[i].second = i + 1;
    }

    sort(A.begin(), A.end());
    cout << A[N - 2].second << endl;
}