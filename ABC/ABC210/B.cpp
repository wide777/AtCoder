#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int N;
    string S;
    cin >> N >> S;
    REP(i, N) {
        if(S[i] == '1') {
            if((i % 2) == 0) cout << "Takahashi" << endl;
            if((i % 2) == 1) cout << "Aoki" << endl;
            break;
        }
    }
}