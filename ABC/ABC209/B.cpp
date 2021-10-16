#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int N, X;
    cin >> N >> X;

    int sum = 0;
    REP(i, N) {
        int A;
        cin >> A;
        if(i % 2 == 1) A--;
        sum += A;
    }
    if(sum <= X) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}