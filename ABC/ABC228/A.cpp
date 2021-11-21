#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int S, T, X;
    cin >> S >> T >> X;
    if(S > T) {
        if((S <= X && X < 24) || (0 <= X && X < T)) {
            puts("Yes");
        } else {
            puts("No");
        }
    } else {
        if(S <= X && X <= T) {
            puts("Yes");
        } else {
            puts("No");
        }
    }

    return 0;
}