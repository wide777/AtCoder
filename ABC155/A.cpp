#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if((a == b && b != c) || (b == c && a != b) || (a == c && a != b)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}