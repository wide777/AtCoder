#include <iostream>
using namespace std;

int main() {
    string S, T;
    cin >> S >> T;

    char c[7] = {'a', 't', 'c', 'o', 'd', 'e', 'r'};
    for(int i = 0; i < (int)S.size(); ++i) {
        if(S[i] == T[i]) continue;

        bool flag = false;
        if(S[i] == '@') {
            for(int j = 0; j < 7; ++j) {
                if(T[i] == c[j]) flag = true;
            }
        }
        if(T[i] == '@') {
            for(int j = 0; j < 7; ++j) {
                if(S[i] == c[j]) flag = true;
            }
        }

        if(flag == false) {
            puts("You will lose");
            return 0;
        }
    }
    puts("You can win");

    return 0;
}