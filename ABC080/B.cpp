#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    int x = n, fn = 0;
    while(x > 0) {
        fn += x % 10;
        x /= 10;
    }
    if(n % fn == 0) {
        puts("Yes");
    } else {
        puts("No");
    }
}