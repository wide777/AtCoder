#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    string S;
    cin >> S;
    for(int i = S.size() - 1; 0 <= i; i--) {
        if(S[i] == '6') {
            cout << '9';
        } else if(S[i] == '9') {
            cout << '6';
        } else {
            cout << S[i];
        }
    }
    cout << endl;
}