#include <iostream>
using namespace std;

int main() {
    string S, T;
    cin >> S >> T;

    int slen = (int)S.size(), tlen = (int)T.size();
    int id = -1;
    for(int i = 0; i < slen - tlen + 1; ++i) {
        int m = i, n = 0;
        for(; m < slen && n < tlen; ++m, ++n) {
            if(S[m] != '?' && S[m] != T[n]) break;
        }
        if(n == tlen) id = i;
    }
    if(id == -1) {
        cout << "UNRESTORABLE" << endl;
        return 0;
    }

    for(int i = 0; i < tlen; ++i) S[id + i] = T[i];
    for(int i = 0; i < slen; ++i) {
        if(S[i] == '?') S[i] = 'a';
    }
    cout << S << endl;

    return 0;
}