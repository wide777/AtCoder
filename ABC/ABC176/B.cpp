#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    string N;
    cin >> N;

    int d_sum = 0;
    rep(i, N.size()) d_sum += N[i] - '0';

    if(d_sum % 9 == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
