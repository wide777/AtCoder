#include <iostream>
using namespace std;

int main() {
    string S;
    cin >> S;

    int slen = (int)S.length();
    int ans = 0;
    for(int i = 0; i < slen; i += 2) {
        if(i + 1 < slen) {
            if(S[i + 1] == '+' && S[i] != '0') ++ans;
            if(S[i + 1] == '*') {
                bool non_zero = (S[i] != '0') ? true : false;
                for(; i < slen && S[i + 1] == '*'; i += 2) {
                    if(S[i + 2] == '0') non_zero = false;
                }
                if(non_zero) ++ans;
            }
        } else {
            if(S[i] != '0') ++ans;
        }
    }
    cout << ans << endl;

    return 0;
}