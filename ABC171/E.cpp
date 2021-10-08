#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int a[N];
    int XOR_ALL = 0;
    for(int i = 0; i < N; ++i) {
        cin >> a[i];
        XOR_ALL ^= a[i];
    }

    for(int i = 0; i < N; ++i) {
        if(i != 0) cout << " ";
        cout << (a[i] ^ XOR_ALL);
    }
    cout << endl;

    return 0;
}