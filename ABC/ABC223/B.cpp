#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    string S;
    cin >> S;
    int N = S.size();

    string m = S, M = S;
    for(int i = 0; i < N; ++i) {
        string Shifted = S.substr(i) + S.substr(0, i);
        if(Shifted < m) m = Shifted;
        if(M < Shifted) M = Shifted;
    }

    cout << m << endl;
    cout << M << endl;
    return 0;
}