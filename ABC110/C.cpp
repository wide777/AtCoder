#include <iostream>
using namespace std;

int main() {
    string S, T;
    cin >> S >> T;

    int N = (int)S.length();
    int f[26][26] = {0};
    for(int i = 0; i < N; ++i) f[S[i] - 'a'][T[i] - 'a'] = 1;

    for(int i = 0; i < 26; ++i) {
        int cnt = 0;
        for(int j = 0; j < 26; ++j) cnt += f[i][j];
        if(1 < cnt) {
            puts("No");
            return 0;
        }
    }

    for(int j = 0; j < 26; ++j) {
        int cnt = 0;
        for(int i = 0; i < 26; ++i) cnt += f[i][j];
        if(1 < cnt) {
            puts("No");
            return 0;
        }
    }

    puts("Yes");
    return 0;
}