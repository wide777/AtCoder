#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int x;
    cin >> x;
    if(x != 0 && x % 100 == 0) {
        puts("Yes");
    } else {
        puts("No");
    }

    return 0;
}