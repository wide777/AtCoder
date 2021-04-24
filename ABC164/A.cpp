#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int s, w;
    cin >> s >> w;
    if(s > w) {
        cout << "safe" << endl;
    } else {
        cout << "unsafe" << endl;
    }
}