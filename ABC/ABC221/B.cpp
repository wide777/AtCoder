#include <iostream>
using namespace std;

int main() {
    string S, T;
    cin >> S >> T;

    int dif = 0;
    bool flag = false;
    for(int i = 0; i < (int)S.size(); ++i) {
        if(S[i] != T[i]) {
            ++dif;
            if(i < (int)S.size() - 1 && S[i] == T[i + 1] && S[i + 1] == T[i]) {
                flag = true;
            }
        }
    }

    if((dif == 0) || (dif == 2 && flag)) {
        puts("Yes");
    } else {
        puts("No");
    }

    return 0;
}