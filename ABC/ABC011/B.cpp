#include <iostream>
using namespace std;

int main() {
    string S;
    cin >> S;

    for(int i = 0; i < (int)S.size(); ++i) {
        if(i == 0) {
            cout << (char)toupper(S[0]);
        } else {
            cout << (char)tolower(S[i]);
        }
    }
    cout << endl;

    return 0;
}