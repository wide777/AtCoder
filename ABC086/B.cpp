#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    string a, b;
    cin >> a >> b;
    int ab = stoi(a + b);
    for(int i = 4; i <= 317; i++) {
        if(ab == i * i) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}