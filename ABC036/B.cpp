#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    char s[N][N];
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < N; ++j) cin >> s[i][j];
    }

    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < N; ++j) cout << s[N - j - 1][i];
        cout << endl;
    }

    return 0;
}