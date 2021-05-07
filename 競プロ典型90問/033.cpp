#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int h, w;

int main() {
    cin >> h >> w;
    if(h == 1 || w == 1) {
        cout << h * w << endl;
    } else {
        cout << ((h + 1) / 2) * ((w + 1) / 2) << endl;
    }
}