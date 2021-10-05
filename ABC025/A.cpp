#include <iostream>
using namespace std;

int main() {
    string S;
    int N;
    cin >> S >> N;

    char X[25][2];
    for(int i = 0; i < 5; ++i) {
        for(int j = 0; j < 5; ++j) {
            X[5 * i + j][0] = S[i];
            X[5 * i + j][1] = S[j];
        }
    }

    cout << X[N - 1][0] << X[N - 1][1] << endl;

    return 0;
}