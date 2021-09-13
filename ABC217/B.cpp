#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    vector<bool> S(4, false);
    vector<string> check = {"ABC", "ARC", "AGC", "AHC"};
    REP(i, 3) {
        string s;
        cin >> s;
        REP(j, 4) {
            if(check[j] == s) S[j] = true;
        }
    }

    REP(i, 4) {
        if(!S[i]) cout << check[i] << endl;
    }
}