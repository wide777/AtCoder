#include <iostream>
using namespace std;

int main() {
    string S;
    cin >> S;

    int Slen = (int)S.length();
    for(int i = 1; i <= Slen; ++i) {
        if((Slen - i) % 2 == 1) continue;
        string s = S.substr(0, Slen - i);
        int range = (int)s.length() / 2;
        string first = s.substr(0, range), second = s.substr(range, range);
        if(first == second) {
            cout << Slen - i << endl;
            break;
        }
    }

    return 0;
}