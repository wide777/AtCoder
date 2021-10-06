#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int cnt1 = N % 2;
    int cnt2 = N / 2;

    cout << cnt1 + cnt2 << endl;
    for(int i = 0; i < cnt1; ++i) cout << 1 << endl;
    for(int i = 0; i < cnt2; ++i) cout << 2 << endl;

    return 0;
}