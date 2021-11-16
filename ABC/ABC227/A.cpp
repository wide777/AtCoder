#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int N, K, A;
    cin >> N >> K >> A;
    int x = A;
    REP(i, K - 1) {
        ++x;
        if(x == N + 1) x = 1;
    }
    cout << x << endl;
    return 0;
}