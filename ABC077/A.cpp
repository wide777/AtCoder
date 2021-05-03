#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    char c11, c12, c13, c21, c22, c23;
    cin >> c11 >> c12 >> c13 >> c21 >> c22 >> c23;
    if(c11 == c23 && c12 == c22 && c13 == c21) {
        puts("YES");
    } else {
        puts("NO");
    }
}