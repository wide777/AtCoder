#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    vector<string> S(3);
    string T;

    REP(i, 3) cin >> S[i];
    cin >> T;

    REP(i, T.size()) {
        if(T[i] == '1') cout << S[0];
        if(T[i] == '2') cout << S[1];
        if(T[i] == '3') cout << S[2];
    }
    cout << endl;

    return 0;
}