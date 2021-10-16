#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int N, X, T;
    cin >> N >> X >> T;

    int quo = N / X;
    int mod = N % X;

    if(mod == 0) {
        cout << quo * T << endl;
    } else {
        cout << (quo + 1) * T << endl;
    }
}
