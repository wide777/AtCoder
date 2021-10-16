#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    N %= 30;

    string S = "123456";
    for(int i = 0; i < N; ++i) {
        swap(S[i % 5], S[i % 5 + 1]);
    }
    cout << S << endl;

    return 0;
}