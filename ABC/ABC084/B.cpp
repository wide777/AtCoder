#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int a, b;
    string s;
    cin >> a >> b >> s;
    bool f = true;
    for(int i = 0; i < a + b + 1; i++) {
        if((0 <= i && i < a) && !isdigit(s[i])) f = false;
        if((i == a) && s[i] != '-') f = false;
        if((a < i && i < a + b + 1) && !isdigit(s[i])) f = false;
    }
    if(f) {
        puts("Yes");
    } else {
        puts("No");
    }
}