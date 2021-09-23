#include <iostream>
using namespace std;

int main() {
    string octave = "WBWBWWBWBWBWWBWBWWBWBWBW";
    string ans[7] = {"Do", "Re", "Mi", "Fa", "So", "La", "Si"};
    string S;
    cin >> S;

    int ans_idx = 0;
    for(int i = 0; i < 12; ++i) {
        if('W' + S.substr(1, 11) == octave.substr(i, 12)) {
            ans_idx = (i + 1) / 2;
        }
    }
    cout << ans[ans_idx] << endl;

    return 0;
}