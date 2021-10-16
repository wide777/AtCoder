#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    string n;
    cin >> n;
    if((n[1] == n[2]) && (n[0] == n[1] || n[2] == n[3])) {
        puts("Yes");
    } else {
        puts("No");
    }
}