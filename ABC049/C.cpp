#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    const string choise[4] = {"maerd", "remaerd", "esare", "resare"};
    string S;
    cin >> S;
    reverse(S.begin(), S.end());

    int slen = (int)S.size();
    for(int i = 0; i < slen; ++i) {
        for(int j = 0; j < 4; ++j) {
            int k = 0;
            int clen = (int)choise[j].size();
            for(; k < clen && i + k < slen; ++k) {
                if(S[i + k] != choise[j][k]) {
                    break;
                }
            }

            if(k == clen) {
                i += k - 1;
                break;
            }
            if(j == 3) {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    cout << "YES" << endl;

    return 0;
}