#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    char x, y;
    cin >> x >> y;
    if(x < y) {
        puts("<");
    } else if(x > y) {
        puts(">");
    } else {
        puts("=");
    }
}