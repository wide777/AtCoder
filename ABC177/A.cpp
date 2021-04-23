#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

int main() {
    int d, t, s;
    cin >> d >> t >> s;

    if((float)d / s <= t) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}